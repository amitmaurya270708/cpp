#include<iostream>
using namespace std;

class Person{
    int age;
    string name;
    string address;
    public:
    void input(){
        cout << "Enter Age : ";
        cin >> age;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Address : ";
        cin >> address;
    }
    void show(){
        cout << "Age : " << age << endl;
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
    }
};

main(){
    Person ankush,ankit,rohit;
    ankush.input();
    ankush.show();
 
    cout << endl;

    ankit.input();
    ankit.show();

    cout << endl;

    rohit.input();
    rohit.show();
}