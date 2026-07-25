# Hybrid Inheritance
It is the combination of more than one type of inheritance is called hybrid inheritance.

## Syntax
    class A{
        member of base class
    };
    class B:virtual public/private/protected A{
        member of derive1 class
    };
    class C:virtual public/private/protected A{
        member of derive2 class
    };
    class D:public A{
        member of derive3 class
    };