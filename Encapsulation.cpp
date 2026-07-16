#include<iostream>
using namespace std;
class Encap{
    private :
    int age;
    void show(){
        cout << "Taj mahal" << endl;
    }
    public :
    string name;
    void setValue(int a){
        age = a;
        show();
        cout << age << endl;
    }
};
main(){
    Encap E;
    E.setValue(23);
    E.name = "Modi";
    cout << E.name << endl;
}