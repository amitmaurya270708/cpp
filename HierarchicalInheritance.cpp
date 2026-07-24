#include<iostream>
using namespace std;
class base{
    protected:
    int a,b;
    public:
    void input(){
        cout << "base class" << endl;
        cin >> a >> b;
    }
    void show(){
        cout << "a + b : " << a+b << endl;
    }
};
class derive1: public base{
    private:
    int n1;
    public:
    void input1(){
        cout << "derive1 class" << endl;
        cin >> n1;
    }
    void show1(){
        cout << "n1 : " << n1 << endl;
        cout << "a + b : " << a+b << endl;
    }
};
class derive2: public base{
    private:
    int n2;
    public:
    void input2(){
        cout << "derive2 class" << endl;
        cin >> n2;
    }
    void show2(){
        cout << "n2 : " << n2 << endl;
        cout << "a + b : " << a+b << endl;
    }
};
main(){
    derive1 obj1;

    obj1.input();
    obj1.show();
    
    obj1.input1();
    obj1.show1();

    derive2 obj2;
 
    obj2.input();
    obj2.show();
    
    obj2.input2();
    obj2.show2();
   
}