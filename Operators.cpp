#include<iostream>
using namespace std;
int main(){
    int a = 20 ;
    int b = 10 ;
        
        // Airthematic Operators 
    int c = a + b;   // to add
    int c = a - b;   // to subtract
    int c = a * b;   // to multiply
    int c = a / b;   // to divide
    int c = a % b;   // to get remainder

        // Relational Operators 
    boolean c = a < b;    // is a less than b
    boolean c = a > b;    // is a  greater than b
    boolean c = a == b;   // is a equal to b
    boolean c = a <= b;   // is a less than or equal to b
    boolean c = a >= b;   // is a greater than or equal to b
    boolean c = a != b;   // is a not equal to b

        // Logical Operators   
    boolean c = a==10 && b==10 ;   // if both a and b are true
    boolean c = a==10 || b==10 ;  // if either a or b is true 
    boolean c = !a; // if a is true then return  false

        // Assignment Operators 
    int c = a;   // a assign to c
    int c += a;  // c = c + a   
    int c -= a;  // c = c - a
    int c *= a;  // c = c * a 
    int c /= a;  // c = c / a

        // Increment / Decrement Operator    
    int c = ++a;   // add 1 then assign to c
    int c = a++;   // a assign to c then add 1
    int c = --a;   // subtract 1 then assign to c
    int c = a--;   // a assign to c the subtract 1
    
        // Ternary Operator   
    int c = (a>b) ? a : b; // if condition is true return a else b   

    cout<< c ;
    return 0;
}