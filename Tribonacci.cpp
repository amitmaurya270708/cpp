#include<iostream>
using namespace std;
class A{
    int n,a,b,c,d;
    public:
    void tribo(){
        a = 0;
        b = 1;
        c = 2;
        cout << "Enter no. of terms" << endl;
        cin >>n;
        for(int i = 0; i < n; i++){
            cout << a << ends;
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
    }
};
int main(){
    A obj;
    obj.tribo();
    cout << endl;

    return 0;
}