#include<iostream>
using namespace std;
main(){

    //  & --> Address of operator     
    //  * --> Value at addresss operator

    int a = 10;
    int *p = &a;    // pointer
    int **q = &p;   // pointer to pointer

    cout << "a : " << a << endl;          
    cout << "p : " << p << endl;        
    cout << "*p : " << *p << endl;       
    cout << "&a : " << &a << endl;         
    cout << "&p : " << &p << endl;         

    cout << endl;
    cout << endl;

    cout << "q : " << q << endl;         // address of p
    cout << "*q : " << *q << endl;        // address of a 
    cout << "**q : " << **q << endl;       // value of a
    cout << "&q : " << &q << endl;        // address of q
    
}