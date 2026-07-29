#include<iostream>
using namespace std;
class Car{
    bool startEngine;
    public:
    Car():startEngine(false){}
    void start(){
        startEngine = true;
        cout << "Engine started" << endl;
    }
    void drive(){
        if(startEngine){
            cout << "You are reafy to drive" << endl;
        }
        else{
            cout << "cant't drive the car" << endl;
        }
    }
};
main(){
    Car C;
    C.start();
    C.drive();
}