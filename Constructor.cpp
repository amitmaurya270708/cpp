#include<iostream>
using namespace std;

class A{
    public :     //optional
    int a;
    A(){    
        a = 100;
    }
    void show(){
        cout << a << endl;
    }
};


main(){
    A obj = A();
    // A obj ;
    obj.show();
}