#include<iostream>
using namespace std;
inline int fun(int a , int b ){
    return a + b;
}
main(){
    int value = fun(34,67);    // calling   
    // it is fatser then normal function
    cout << value << endl;
}