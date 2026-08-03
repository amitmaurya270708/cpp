#include<iostream>
using namespace std;

template<class T>    // class template
class show {
    T a, b;
public:
    show(T p, T q) {
        a = p;
        b = q;
    }
    void display() { 
        cout << " A : " << a << " B : " << b << endl;
    }
};

int main() {  
    show<int> obj1(10, 20);        
    obj1.display();

    show<float> obj2(10.2, 20.4);  
    obj2.display();

    show<char> obj3('a', 'b');     
    obj3.display();   
    return 0;  
}