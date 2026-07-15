# Constructor
1) Constructor is a special type of function which has the same name as the class-name.
2) Constructtor is being automatically called at the time of object declaration.
3) The return type of the constructor is the class type.

# Destructor
1) Destructor is a special memeber function that is created automatically when an object is destroyed that has been created by the constructor.
2) Destructor are used to de-allocate the memory that has been allocate for the object by the constructor.
3) A destructor declaration should always begin with tilde (~) symbol as shown in the following example.

---- 

## Example
    #include<iostream>
    using namespace std;
    class test{
        int n;
        public :
        test(){
            n = 10;
            cout << n << endl;
        }
        ~test(){
            cout << "object destroyed" << endl;
            cout << n << endl;
        }
    };
    void main(){
        test obj;
    }

# Types of Constructor
1) Default Constructor
2) Parametrized Constructor
3) Copy Constructor