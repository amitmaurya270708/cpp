#include<iostream>
using namespace std;
main(){
    // Call By Reference
    int num3 = 1000;
    cout << "Original value" << num3 <<  endl;
    int &ref = num3; 
    // now both have save address and any changes in one will affect both
    cout <<"Reference : " << ref << endl;
    ref++;
    cout << "New value" << num3<< endl;
    num3++; 
    cout << "New value" << ref<< endl;
}