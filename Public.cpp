//  public -->  1) Inside class   2) Outside of class

#include<iostream>
using namespace std;

class A{
    public:
    int a;
    void show(){
        a = 10; 
        cout << "Inside class : " << a << endl;
    }
};


main(){
    A obj; 
    obj.show();
    obj.a = 20;
    cout << "Outside of class : " << obj.a << endl;
}