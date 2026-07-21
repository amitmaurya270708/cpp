#include<iostream>
using namespace std;
class base{
    private:
    int a, b;
    public:
    void input(){
        cout << "base class" << endl;
        cin >> a >> b;
    }
    void show(){
        cout << "a : " << a << " b :" << b << endl;
    }
};
class derive: public base{
    private:
    int m, n;
    public:
    void getdata(){
        cout << "derive class" << endl;
        cin >> m >> n;
    }
    void display(){
        cout << "m : " << m << " n :" << n << endl;
    }
};
main(){
    base obj;
    derive obj1;
    
    obj.input();
    obj.show();

    obj1.getdata();
    obj1.display();

    obj1.input();
    obj1.show();

}