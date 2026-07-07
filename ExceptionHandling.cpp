#include<iostream>
#include<stdexcept>
using namespace std;
main(){
    double bal = 1000.0;
    try{
        double ant;
        // Deposite 
        cout << "enter Deposite Amount : ";
        cin >> ant;
        if(ant <= 0){
            throw invalid_argument("Invalid Deposite Amount : ");
        }
        bal = bal + ant;
        cout << "Available Amount : " << bal << endl;
        
        // Withdrawan
        cout << "enter Withdrawan Amount : ";
        cin >> ant;
        if(ant <= 0){
            throw invalid_argument("Invalid Withdwaran Amount : ");
        }
        if(ant > bal){
            throw runtime_error("Insufficient Fund :  ");
            cout << endl;
        }
        bal = bal - ant;
        cout << "Available Amount : " << bal << endl;
    }
    catch(exception& e){
        cout << e.what();
    }
}