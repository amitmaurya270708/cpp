#include<iostream>
using namespace std;
main(){
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int e = 50;
    cout << a << ends << b << ends << c << ends << d << ends << e << endl; 

    cout << endl;

// ----------------------------------------------------------------------------

    int nums[] = {10 , 20 , 30 , 40 , 50};
    for(int i = 0; i < 5; i++){
        cout << nums[i] << ends;
    }

    cout << endl;
    cout << endl;

// ---------------------------------------------------------------------

    for(int i = 4; i >= 0; i--){
        cout << nums[i] << ends;
    }

    cout << endl;
    cout << endl;

// ----------------------------------------------------------------------------

    for(int i = 0; i < 5; i++){
        cout << nums[i] << endl;
    }

    cout << endl;

// ------------------------------------------------------------------------------

    for(int i = 4; i >= 0; i--){
        cout << nums[i] << endl;
    }

    cout << endl;

// ------------------------------------------------------------------------------

    cout << nums[0] << endl;
    cout << nums[1] << endl;
    cout << nums[2] << endl;
    cout << nums[3] << endl;
    cout << nums[4] << endl;

}