#include<iostream>
using namespace std;

union Emp{
    int Eid;    // 4Bytes
    double salary;  // 8 Bytes
    char ch;    // 1 Byte
};

main(){
    union Emp E;    // E is variable name
    E.Eid = 12876;
    cout << E.Eid << endl;

    E.salary = 753715;
    cout << E.salary << endl;

    E.ch = 'A';
    cout << E.ch << endl;

    cout << endl;
    cout << sizeof(E) << endl; // Size od biggest memeber of union
}