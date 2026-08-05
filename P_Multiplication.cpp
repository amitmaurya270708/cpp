#include<iostream>
using namespace std;
class A{
    int n,i,r;
    public:
    void table(){
        cout << "Enter any number"<< endl;
        cin >> n;
        for(i = 1; i <=10; i++){
            r = n*i;
            cout << n << " * " << i << " = " << r << endl;
        }
    }
};
main(){
    A obj;
    obj.table();
}