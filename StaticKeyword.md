static      
|--> Data member            
|--> Member function        

## 1) Static Data member
1) Whenever we declare a data members as a static either inside or outside of a class called static data member.
2) There is only one copy of static data member even if there are many class objects.
3) It is always initialized with zero because it's defalut value is zero.
4) It is shared memeory for all objectof the class.
5) It refains it's values.

## 2) Static member function
1) It we create a member function of a class as a static member function.
2) It is access only static data members.
3) It is also accessible if we don't have any object of a class.

## Static Data Syntax

    class A{
        int a;
        static int b;
        public:
        A(int x, int y){
            a = x;
            b = y;
        }
        void show(){
            cout << a << " " << b << endl;
        }
        static void disp(){
            cout << b << endl;            // a is not accessible
        }
    };
    int A::b = 0;
    void main(){
        A obj(10,20);
        obj.show();

        A obj2(100,200);
        obj2.show();

        A::disp();
        obj.show();
    }
    
