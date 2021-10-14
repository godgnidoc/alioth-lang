<h1>Alioth特性列表</h1>

> Sep. 09, 2021 by GodGnidoc

本文档散列Alioth语言特性，用于指导语法设计及编译器开发。

# 1. 目录

- [1. 目录](#1-目录)
- [2. 模块](#2-模块)
- [3. 引入](#3-引入)
- [4. 定义](#4-定义)
  - [4.1. 枚举定义](#41-枚举定义)
  - [4.3. 类定义](#43-类定义)
    - [4.3.1. 属性定义](#431-属性定义)
    - [4.3.2. 方法定义](#432-方法定义)
    - [4.3.3. 修饰器](#433-修饰器)
  - [4.4. 接口定义](#44-接口定义)
  - [4.5. 模板](#45-模板)
  - [4.6. 修饰符](#46-修饰符)
  - [4.7. 方法实现](#47-方法实现)
  - [4.8. 参数定义](#48-参数定义)
  - [4.9. 数组](#49-数组)
  - [4.10. 其他语法结构](#410-其他语法结构)
  - [4.11. 语句](#411-语句)
  - [4.12. 变量](#412-变量)
  - [4.13. 条件分支](#413-条件分支)
  - [4.14. 迭代循环](#414-迭代循环)
  - [4.15. 条件循环](#415-条件循环)
  - [4.18. 表达式](#418-表达式)
  - [4.19. lambda表达式](#419-lambda表达式)

# 2. 模块

Alioth程序由模块构成，模块源码可在一份或多份源码文件中编写。

模块声明语句：

~~~
modecl = 
    MODULE ID;
~~~

示例：

~~~
module hello
~~~

`module`仅在模块声明语句完毕前作为关键字存在。

# 3. 引入

Alioth编译器以包为单位组织可引用的模块，编译环境配置信息指定源码可使用的包，源码则从包引入模块。

模块引入语句：

~~~
import =
    IMPORT import.modules FROM DQSTR
    | IMPORT import.modules FROM SQSTR;
import.modules = 
    import.module
    | import.modules COMMA import.module;
import.module =
    ID
    | ID AS ID;
~~~

示例：

~~~
import 'std' for 
    io,
    string as str,
    list
~~~

# 4. 定义

## 4.1. 枚举定义

枚举定义可以选择整数类基础数据类型作为底层实现，并且可以指定枚举元素的初始值。

语法层面暂时不检查底层数据类型是否符合要求，在语义分析时，编译器具备解析类型表达式能力后再检查。

~~~
enum =
    enum.signature enum.body;
enum.signature = 
    ENUM ID
    | ENUM ID CONON txpr;
enum.body = 
    OPB enum.items CLB;
enum.items =
    enum.item
    | enum.items enum.item
    | enum.items COMMA enum.item;
enum.item =
    ID
    | ID ASS expr.value;
~~~

示例：

~~~
enum Direction : byte {
    Forward = 7, Backward, Left, Right, Up, Down
}
~~~

## 4.3. 类定义

**Alioth**支持闭包，故不需要支持右值引用。

~~~
class = 
    class.signature OPB class.body CLB;
class.signature = 
    CLASS ID
    | CLASS ID COLON ancestors
    | CLASS ID template.signature
    | CLASS ID template.signature COLON ancestors;
class.body =
    %empty
    | class.inner
    | class.inners class.inner
    | class.inners SEMI class.inner;
class.inner =
    | decorators modifiers definition.inner;
~~~

### 4.3.1. 属性定义

~~~
property.signature = 
    ID array.signature COLON txpr
    | ID array.signature ASS expr
    | ID array.signature COLON txpr ASS expr
    | ID COLON txpr property.accdef;
property.accdef =
    OPB GET CLB
    | OPB SET CLB
    | OPB GET SET CLB;
~~~

### 4.3.2. 方法定义

**Alioth**支持类型推断语句故不支持模板函数

~~~
method.signature =
    ID parameter.signature COLON txpr
    | ID OPE parameter.signature CLE COLON txpr;
~~~

### 4.3.3. 修饰器

~~~
decorators =
    %empty
    | decorator
    | decorators decorator;
decorator =
    AT namepath
    | AT namepath OPE decorator.args CLE;
decorator.args =
    expr
    | decorator.args COMMA expr;
~~~

## 4.4. 接口定义

~~~
interface =
    interface.signature OPB interface.body CLB;
interface.signature = 
    INTERFACE ID
    | INTERFACE ID COLON txpr
    | INTERFACE ID template.signature
    | INTERFACE ID template.signature COLON txpr;
interface.body =
    interface.inner
    | interface.inners interface.inner
    | interface.inners SEMI interface.inner;
interface.inner =
    | modifiers definition.inner;
~~~

接口可以继承，但接口继承为单继承。为合并接口，可使用类型表达式。

## 4.5. 模板

~~~
template.signature =
    LT template.params GT;
template.params = 
    ID
    | ID COLON txpr
    | ID ASS txpr
    | ID COLON txpr ASS txpr
    | template.params COMMA ID
    | template.params COMMA ID ASS txpr;
~~~

## 4.6. 修饰符

~~~
modifiers =
    %empty
    | modifier
    | modifiers modifier
modifier =
    CONST | PUBLIC | PRIVATE | PROTECTED | CONST | META | ASYNC | OVERRIDE | FINAL;
~~~

## 4.7. 方法实现

**Alioth**支持类型推断，故不允许模板函数偏特化。

~~~
method.implementation =
    namepath parameter.signature COLON txpr OPB statements CLB;
~~~

## 4.8. 参数定义

~~~
parameter.list =
    OPE parameter.signatures CLE
    | OPE parameter.signatures ETC ID CLE;
parameter.signatures =
    %empty
    | parameter.signature
    | parameter.signatures COMMA parameter.signature
parameter.signature =
    | decorators modifiers.parameter ID COLON txpr
    | decorators modifiers.parameter ID ASS expr
    | decorators modifiers.parameter ID COLON txpr ASS expr;
~~~

## 4.9. 数组

~~~
array.signature =
    %empty
    | OPI CLI
    | OPI expr CLI
    | array.signature OPI CLI
    | array.signature OPI expr CLI;
~~~

## 4.10. 其他语法结构

~~~
namepath =
    ID
    | ID DOT ID;
ancestors =
    txpr
    | txpr COMMA txpr;
definition.inner =
    property.signature
    | method.signature;
~~~

## 4.11. 语句

~~~
statements =
    %empty
    | statements SEMI
    | statements let
    | statements ifelse
    | statements for
    | statements while
    | statements dowhile
    | statements flowctrl
    | statements expr;
statement =
    | let
    | ifelse
    | for
    | while
    | dowhile
    | flowctrl
    | expr
    | block;
~~~

## 4.12. 变量

~~~
let =
    LET modifiers ID array.signature COLON txpr
    | LET modifiers ID array.signature ASS expr
    | LET modifiers ID array.signature COLON txpr ASS expr;
~~~

## 4.13. 条件分支

~~~
ifelse =
    IF OPE expr CLE statement
    | IF OPE expr CLE statement ELSE statement;
~~~

## 4.14. 迭代循环

~~~
for =
    FOR for.label OPE for.steps CLE statement;
for.label =
    %empty
    | AT ID;
for.steps =
    LET modifiers ID IN expr
    | statement SEMI expr SEMI expr;
~~~

## 4.15. 条件循环

~~~
while =
    WHILE OPE expr CLE statement
    | WHILE statement;
~~~

## 4.18. 表达式

~~~
expr =
    expr.mono
    | expr.binary
    | expr.subexpr
    | expr.as
    | expr.instanceof
    | expr.in
    | expr.object
    | expr.array
    | expr.lambda
    | expr.await;
~~~

## 4.19. lambda表达式

~~~
expr.lamdda = 
    ID DRP statement
    | parameter.list DRP statement;
~~~

若函数无闭包需求，则编译器将根据入参尝试裁剪不可能的分支，构造隐函数

修饰器

AOP(Aspect Oriented Programming) 面向切面编程：把和主业务无关的事情，放到代码外面去做。
IoC/DI(Inversion of Control / Dependency Injection) 控制反转/依赖注入：引入中间件，将复杂的耦合关系归一化

框架通过标注将对象注入，核心业务逻辑不需要考虑何时何处构造依赖对象。实现真的只需要拥有接口即可实现业务逻辑。

AOP和IoC的最终目的均为剥离核心业务逻辑以外的代码，进一步降低耦合性。

类
 -> 为类添加属性或函数
 -> 作为函数，能访问类的元信息，在编译时运行
 -> 类的元信息能否被修改？冲突：类型系统合并时，相同类型ID的描述符结构不一样；
        可以认为，每个类型系统中的类都不必溯源，合并时，仅接驳接口体系即可。
        -> 但接口成员亦使用类型系统中的其他类；
            为模块添加全局唯一标识方法，以模块为单位合并类型系统。
 -> 用例：为类添加串行化算法

属性



方法

参数

局部变量