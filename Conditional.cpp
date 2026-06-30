#include<iostream>
using namespace std;
main(){
    string signal;
    cout << "Enter the signal colour :" << endl;
    cin >> signal;
    cout << endl;

    // if statement
    cout << "if statements" << endl;

    if(signal == "red"){
       cout << "Pls stop, don't go!!" << endl;
    }
    if(signal == "green"){
        cout << "You may go now!!" << endl;
    }

    cout << endl;

// ---------------------------------------------------------------

    // if else
    cout << "if else " << endl;

    if(signal == "red"){
        cout << "Pls stop, don't go!!" << endl;
    }
    else{
        cout << "You may go now!!" << endl;
    }

    cout << endl;
    cout << endl;

//----------------------------------------------------------------

    int marks;
    cout << "Enter your marks :" << endl;
    cin >> marks;
    cout << endl;

    // if else if
    cout << "if else if" << endl;
        
    if(marks < 33){
        cout << "You are fail!! Prepare youself for re-examination" << endl;
    }
    else if(marks >= 33 && marks <= 60){
     cout << "You have passed, but improve yourself" << endl;
    }
    else{
        cout << "Great! you have passed with good marks" << endl;
    }

    cout << endl;

    //--------------------------------------------------------------

    // nested if
    cout << "nested if" << endl;
    
    if(marks < 33){
        cout << "You have failed!! Prepare youself for re-examination" << endl;
    }
    else{
        if( marks < 50){
            cout << "You have passed. Your grade is E" << endl;
        }
        else if( marks < 60){
            cout << "You have passed. Your grade is D" << endl;
        }
        else if( marks < 70){
            cout << "You have passed. Your grade is C" << endl;
        }
        else if( marks < 80){
            cout << "You have passed. Your grade is B" << endl;
        }
        else if( marks < 90){
            cout << "You have passed. Your grade is A" << endl;
        }
        else if( marks <= 100){
            cout << "You have passed. Your grade is S" << endl;
        }
        else{
            cout << "Invalid marks!!" << endl;
        }
    }

    cout << endl;
    cout << endl;

// ---------------------------------------------------------------------

    int day;
    cout << "Enter your between 1 to 7" << endl;
    cin >> day;
    cout << endl;
    
    // switch statements
    cout << "switch statement" << endl;

    switch(day){
        case 1 :
                    cout << "Working day" << endl; 
                    break; 
        case 2 :
                    cout << "Working day" << endl; 
                    break; 
        case 3 :
                    cout << "Working day" << endl; 
                    break; 
        case 4 :
                    cout << "Working day" << endl; 
                    break; 
        case 5 :
                    cout << "Working day" << endl; 
                    break; 
        case 6 :
                    cout << "Half day" << endl; 
                    break; 
        case 7 :
                    cout << "Holiday!!!!!!!!!!!" << endl; 
                    break; 
        default :
                    cout << "Check your day " << endl; 
                    break; 
    }

}