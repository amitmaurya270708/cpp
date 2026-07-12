#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    A(int x, int y){
        a = x;
        b = y;   
    }
    void show(){
        cout << a << " " << b << endl;
    }
};
main(){
    A obj(10,20);
    obj.show();
}