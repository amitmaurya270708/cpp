#include<iostream>
using namespace std;
class base1{
    private:
    int a,b,c;
    public:
    void input(){
        cout << "Base 1" << endl;
        cin >> a >> b;
    }
    void show(){
        c = a+b;
        cout << "c : " << c << endl;
    }
};
using namespace std;
class base2{
    private:
    int a,b,c;
    public:
    void input1(){
        cout << "Base 2" << endl;
        cin >> a >> b;
    }
    void show1(){
        c = a-b;
        cout << "c : " << c << endl;
    }
};
class derive:public base1,public base2{
    private:
    int a,b,c;
    public:
    void input2(){
        cout << "derive" << endl;
        cin >> a >> b;
    }
    void show2(){
        c = a*b;
        cout << "c : " << c << endl;
    }
};

main(){

    derive obj2;
    obj2.input2();
    obj2.show2();

    obj2.input();
    obj2.show();
        
    obj2.input1();
    obj2.show1();

}