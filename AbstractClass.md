# Abstract Class 
A class which contain at least one pure virtual function . We can't declare the object of abstract class.

## Syntax
    class A{
        public:
            virtual void show() = 0;
    };


## Pure virtual function
1) Pure virtual function are virtual function which have no defination. They start with virtual keyboard and ends with equal to zero.
2) If we dont't override the pure virtual function in derive class, then derive class also becomes abstract class.
3) We can't change the signature of pure virtual function.