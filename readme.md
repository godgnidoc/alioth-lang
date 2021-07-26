<h1>The Alioth programming language</h1>

We are trying to build a kind of programming language aim to make it simple developing some projects of complicated or immense.

![](doc/res/img/icon_with_text.png)

The Alioth programming language is designed to be system programming language, which means that the Alioth programming language needs to be compiled and the output of compiler will become native binary executable.

*Keep it simple and make powerful !*

Several topics are mainly mentioned when designing this language.


# Structural and contextual typing

Alioth identifies interfaces by structure they have rather than names.

~~~ts
interface A {
    prop : i32
    method() {

    }
}

class C {
    get prop() : i32 {
        return 10
    }
    method() {

    }
}

func( arg : A ) {

}

main( args : String[] ) {
    func( new C )
}
~~~


Class

Interface

Module

# Aspect oriented programming and Reflection

Alioth provides `decorator` to change behaviours of code without modifying it.

Type is first-class citizen, in Alioth, types can be stored, calculated; Create a new type from runtime information and use it to create new object !

~~~ts

class JSON<T> extends T{
    static fromJson(json : Json) {
        let target = new JSON<T>
        for( let member of T.members.public ) {
            if( [Meta.Descriptor.Property, Meta.Descriptor.Getter].includes(member.category) )
                target[member.name] = json[member.name]
        }
        return target
    }

    toJson() {
        let json : Json = new JsonObject
        for( let member of T.members.public ) {
            if( [Meta.Descriptor.Property, Meta.Descriptor.Getter].includes(member.category) )
                son[member.name] = this[member.name]
        }
        return json
    }
}

@JSON
class Data {

}
~~~

When used as decorator, branches and loops involved with metadata while be reduced during compiling stage using meta info of program.

Types and other metainfos could be stored runtimely:

~~~ts vcxs VCX
interface API {
    parameters: Parameters,
    returntype: interface
}
~~~

Closure

Type Calculating

# Syntaxs

predication for class using keyword `while`

~~~ebnf
class definition := "class" name ["<" tname {"," tname} ">"] ["extends" cname ] ["wihle" texpr] class definition body
~~~

keyword `meta` provides meta information for every thing.

~~~
methodA( ) {
    stdio.log(meta.context.callee.name) // main
    stdio.log(stdio.log.meta.category) // Method
}
~~~