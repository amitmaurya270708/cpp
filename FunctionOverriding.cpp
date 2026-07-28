#include<iostream>
using namespace std;
class A{
    public:
        virtual void fun(){
            cout << "Ankit" << endl;
        }
};
class B:public A{
    public:
        void fun(){
            cout << "Ankush" << endl;
        }
};
main(){
    A *ptr; B obj;
    
    obj.A::fun();

    ptr =&obj;
    ptr->fun();
} 