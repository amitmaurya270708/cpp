#include<iostream>
using namespace std;

void fun(){
    class A{
        private :
        int a,b;
        public :
        void show(){
            cout << "enter two value: " << endl;
            cin >> a >> b;
            cout << a << "   " << b << endl;
        }
    };
    A obj;
    obj.show();
}

main(){
    fun();
}