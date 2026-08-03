#include<iostream>
using namespace std;
template<class T>        // function template
void show(T a, T b){
    cout << "A : " << a << " B : " << b << endl;
}
main(){
    int p = 10;
    int q = 20;
    char m = 'a';
    char n = 'b';
    float s = 10.45, f = 12.45;
    show(p,q);
    show(m,n);
    show(s,f);
}