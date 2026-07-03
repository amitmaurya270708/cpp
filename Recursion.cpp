#include<iostream>
using namespace std;

int fact(int num){   // num = 5 
    if(num == 0){   
        return 1;
    }
    else{
        int num2;
        num2 = num * fact(num-1);  // for the first time -->  5 * fact(4) ....
        //  5 * 4 * 3 * 2 * 1 * 1   here extra * 1 because of if condition
        return num2;
    }
}

main(){
    int num;
    cout << "Enter a Number : " ;
    cin >> num;
    int factorial = fact(num);   // calling fact()
    cout <<  "The factorial is : "<< factorial << endl;
}