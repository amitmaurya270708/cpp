#include<iostream>
using namespace std;

class A{
    public :
    class B{    // memeber variable of class A
        int a,b;
        public :
        void input(){     // member function of class B
            cout << "enter two value : " << endl;
            cin >> a >> b;
        }
        void show(){
            cout << a << " " << b << endl;
        }
    };
};

main(){
    A::B obj;
    obj.input();
    obj.show();
}