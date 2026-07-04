#include<iostream>
using namespace std;

void Pointer(int *num){
    *num = *num + 110;  
    // doing chnages in value by the help of it's address
    cout << "Pointer value : " << *num << endl;
}

main(){
    // Call By Address
    // Modication happen only inside the function
    int num2 = 1000;
    cout << "Original value : "<< num2 << endl;
    Pointer(&num2);
    cout << "New value : "<< num2 << endl;

}