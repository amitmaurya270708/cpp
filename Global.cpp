#include<iostream>
using namespace std;

class A{
    protected :
    int a,b;
    public :
    void input(){
        cout << "enter two value: " << endl;
        cin >> a >> b;
    }
    void show(){
        cout << a << "   " << b << endl;
    }
};

class B : public A{
    public :
    void disp(){
        cout << a <<" " << b << endl;
    }
};

main(){
    // A obj;
    B obj2;
    obj2.input();
    obj2.show();
    obj2.disp();
}