#include<iostream>
using namespace std;
main(){
    // int for = 100;   // it will show error because for is reserved keyword
    // cout << for << endk;
    
    int num = 100;
    if(num > 50){
        cout << num << endl;
    }
    else{
        cout << num << endl;
    }

    for(int i = 0; i < 5; i++){
        cout << "Hello World" << endl;
    }

    int cat = 3;
    while(cat > 0){
        cout << "This is cat" << endl;
        cat--;
    }
}        