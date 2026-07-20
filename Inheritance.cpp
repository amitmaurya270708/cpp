#include<iostream>
using namespace std;

class Father{
    protected:
    string surname = "Khushwaha";
};

class son1:Father{
    string name = "modi";
    public:
    void show(){
        cout << name << " " << surname << endl;
    }
};
class son2:Father{
    string name = "yogi";
    public:
    void disp(){
        cout << name << " " << surname << endl;
    }
};
main(){
    son1 s1;
    s1.show();

    son2 s2;
    s2.disp();
}