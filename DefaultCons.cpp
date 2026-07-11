#include<iostream>
using namespace std;

class A{
    int a;  // private
    public :
    A(){
        a = 100;
        cout << a << endl;
    }
};
main(){
    A obj;
}