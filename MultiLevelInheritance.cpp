#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void input(){
        cout << "base class" << endl;
        cin >> a;
    }
    void show(){
        cout << "a : " << a << endl;
    }
};
class derive1: public base{
    protected:
    int b;
    public:
    void input1(){
        cout << "derive1 class" << endl;
        cin >> b;
    }
    void show1(){
        cout << "a : " << a << " b : " << b << endl;
    }
};
class derive2: public derive1{
    private:
    int c;
    public:
    void input2(){
        cout << "derive2 class" << endl;
        cin >> c;
    }
    void show2(){
        cout << "a : " << a << " b : " << b << " c : " << c << endl;
    }
};
main(){
    // base obj;
    // obj.input();
    // obj.show();

    // derive1 obj1;
    // obj1.input1();
    // obj1.show1();

    // derive2 obj2;
    // obj2.input2();
    // obj2.show2();

    derive2 obj2;
    obj2.input();
    obj2.show();

    obj2.input1();
    obj2.show1();

    obj2.input2();
    obj2.show2();

}