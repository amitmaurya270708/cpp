#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
main(){
    char myName[20];      // fix , mutable , end with Null (\o)
    cout << "Enter your full name : ";
    gets(myName);
    puts(myName);

    cout << endl;

    string Address;       // Dynamic , immutable 
    cout << "Enter your address : ";
    getline(cin,Address);
    cout << "Full address : " << Address << endl;

    cout << endl;
// -------------------------------------------------------------------------------------

    // to add a character in the end

    string dogName = "Tommy";
    dogName.push_back('Y');
    cout << "Modification by push-back()"<< dogName << endl;

    // to delete a character in the end 

    dogName.pop_back();
    cout << "Modification by pop-back()" <<dogName << endl;

// ---------------------------------------------------------------------------------------

    // to find length

    char greeting[] = "Hello world";
    int length = strlen(greeting);
    cout << "greeting length : " <<length << endl;

// ---------------------------------------------------------------------------------------

    // copy the value of one string in other
    
    char str[] = "Cat";
    char str2[10];
    strcpy(str2,str);
    cout << str2 << endl;

// ---------------------------------------------------------------------------------------

    // adding two strings

    char str3[] = "Dog";
    char str4[] = "Jack";
    strcat(str3,str4);
    cout << str3 << endl;

// ---------------------------------------------------------------------------------------

    // Compare

    int value = strcmp(str3,str4);
    if(value == 0){
        cout << "String r equal" << endl;
    }
    else{
        cout << "string r not equal" << endl;
    }

// ----------------------------------------------------------------------------------------

    // String
    
    string rat = "Rat";
    string mice = " Mice";
    cout << rat.length() << endl;
    cout << rat.size() << endl;
    cout << rat.replace(0,3,"Mouse") << endl;
    cout << rat.append(mice) << endl; // because value of rat has already been replaced


// ----------------------------------------------------------------------------------------

    // need library <algorithm>

    string person  = "Elon Musk";
    reverse (person.begin(),person.end());
    cout << person << endl; 

}