#include<iostream>
using namespace std;
main(){

    // while loop
    cout << "while loop" << endl;
    cout << endl;

    int a = 0;
    while(a < 5){    // It will work until condition become false 
        cout << "hello world" <<endl;
        a++;
    }

// ------------------------------------------------------
    cout << endl;
    cout << endl;
    cout << endl;

// ------------------------------------------------------

    // do while loop
    cout << "do while loop" << endl;
    cout << endl;

    int b = 0;
    do{
        cout << "Statement is print because conition start after this " << endl;
    }while(b >0);


// -------------------------------------------------------
    cout << endl;
    cout << endl;
    cout << endl;

// -------------------------------------------------------

    // for loop
    cout << "for loop" << endl;
    cout << endl;

    for(int i = 0; i < 5; i++){
        cout << "Value of i is " << i << endl;
    }

}