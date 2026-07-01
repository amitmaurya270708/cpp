#include<iostream>
using namespace std;

int sum(int a, int b){
    int add = a + b;
    return add;
}

main(){
    
    int num = 0;
    cout << "goto" << endl;
    
    // goto 
    amit:  // <-----------------------------------------
                                                 //    |
    if(num < 5){                                 //    |
    cout << "Value of num is "<< num << endl;    //    |
    num++;                                       //    |
    goto amit;  // -------------------------------------
    }

    cout << endl;
// -----------------------------------------------------------------------------------
    
    cout << "break" << endl;
   
    // break
    for(int i = 0; i < 5; i++){
        cout << "Value of i is " << i << endl;
        if(i == 2){
            break;               // loop will end here
        }
    }

    cout << endl;
// -----------------------------------------------------------------------------------

    cout << "continue" << endl;

    // continue
    for(int i = 0; i < 5; i++){
        if(i == 2){
            continue;           // code after this line in the loop will be skipped
        }
        cout << "Value of i is " << i << endl;
    }

    cout << endl;

//--------------------------------------------------------------------------------------

    cout << "return" << endl;
    // return
    int a;
    cout << "Enter first number to sum" << endl;
    cin >> a;
    int b;
    cout << "Enter second number to sum" << endl;
    cin >> b;

    int result = sum(a , b);
    cout << "The sum is "<< result << endl;

}                           