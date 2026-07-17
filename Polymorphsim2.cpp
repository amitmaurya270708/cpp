#include<iostream>
using namespace std;
                    // Run-Time Polymorphsim

class A{
    public:
    virtual void disp(){
        cout << "it's class A" << endl;
    }
};
class B:public A{
    public:
    void disp(){
        cout << "it's class B" << endl;
    }
};
main(){
    // B obj;
    // obj.disp();
    // obj.A::disp();

    A *ptr;
    B obj;
    ptr= &obj;
    ptr->disp();
}