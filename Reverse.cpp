#include<iostream>
using namespace std;
class A{
    int n,r;
    public:
        void input(){
            cout << "Enter any number"<< endl;
            cin >> n;
        }
        void show(){
            while(n > 0){
                r = n%10;
                cout << r;
                n = n/10;
            }
            cout << endl;
        }
};
int  main(){
    A obj;
    obj.input();
    obj.show();

    return 0;
}