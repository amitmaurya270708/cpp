#include<iostream>
using namespace std;
class A{
    int a = 10, b =20;
    public:
    void show(){
        cout << a << " " <<b << endl;
    }
    friend class B;
};
class B{
    public:
    void add(A r){
        int add = r.a + r.b;
        cout << "add : " << add << endl;
    }
};
main(){
    A obj;
    obj.show();

    B obj2;
    obj2.add(obj);
}