#include<iostream>
using namespace std;
class A{
    public:
        virtual void show() = 0;
        void disp(){
            cout << "Hii i am base class" << endl;
        }
};
class B:public A{
    public:
        void show(){
            cout << "hii i am derive class" << endl;
        }
};
main(){
    B obj;
    obj.disp();
    obj.show();

    A *p;
    p = &obj;
    p->disp();
    
}