#include<iostream>
using namespace std;
class A{
    int a,b,c,ch;
    public:
    void calculator(){
        cout << "Enter two numbers" << endl;
        cin>>a >>b;
        cout << "Enter choice for operation" << endl;
        cin >> ch;
        if(ch==1){
            c=a+b;
            cout << "addition : " << c<< endl;
        }
        if(ch==2){
            c = a-b;
            cout << "subtraction : " << c<< endl;
        }
        if(ch==3){
            c = a*b;
            cout << "multiplication : " << c<< endl;
        }
        if(ch==4){
            c = a/b;
            cout << "division : " << c<< endl;
        }
        if(ch>4){
            cout << "Invalid choice "<< endl;
        }
    }
};
main(){
    A obj;
    obj.calculator();
}