#include<iostream>
using namespace std;
class A{
    public:
    int a,b,c;
    void input(){
        cout << "Enter three number" << endl;
        cin>>a>>b>>c;
    }
    void show(){
        if(a>b){
            if(a>c){
                cout<< "Greatest : " << a << endl; 
            }
            else{
                cout<< "Greatest : " << c << endl; 
            }
        }
        else{
            if(b>c){
                cout<< "Greatest : " << b << endl; 
            }
            else{
                cout<< "Greatest : " << c << endl; 
            }
        }
    }
};
int main(){
    A obj;
    obj.input();
    obj.show();
    return 0;
}