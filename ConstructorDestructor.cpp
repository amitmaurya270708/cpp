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
main(){
    test obj;
}
