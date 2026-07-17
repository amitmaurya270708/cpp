#include<iostream>
using namespace std;
                    // Compile-Time Polymorphsim
void showInfo(int age){
    cout << age << endl;
}
void showInfo(string name){
    cout << name << endl;
}
void showInfo(double salary){
    cout << salary << endl;
}
main(){
    showInfo("Elon");
    showInfo(35);
    showInfo(1200000.0);
}