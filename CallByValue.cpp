#include<iostream>
using namespace std;

void changeValue(int num){
    num = num + 110;
    cout << "Change value : " << num << endl;
}


main(){
    // Call By Value
    // Modication happen only inside the function
    int num = 1000;
    cout << "Original value : "<< num << endl;
    changeValue(num);    
    cout << "New value : "<<num << endl;
    
}