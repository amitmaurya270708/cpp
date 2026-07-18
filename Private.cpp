#include<iostream>
using namespace std;

class A{
    private:
    int a ,b;
    public:
    void show(){
        a = 10; b = 20;
        cout << a << ends << b << endl;
    }
    friend class B;
};

class B{
    public:
    void disp(A ref){
        ref.a = 10;  ref.b = 20;
        cout << ref.a << ends << ref.b << endl;
    }
};

main(){
    A obj;  B obj2;
    obj.show();
    obj2.disp(obj);
}