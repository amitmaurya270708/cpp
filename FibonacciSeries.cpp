#include<iostream>
using namespace std;
class A{
    int n,a,b,c;
    public:
    void fib(){
        a = 0;
        b = 1;
        cout << "Enter no. of terms" << endl;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cout << a << ends;
            c = a+b;
            a = b;
            b = c;
        }
    }
};
int  main(){
    A obj;
    obj.fib();
    cout << endl;
    return 0;
}
