#include<iostream>
using namespace std;

#define PI 3.14
#define Square(r) ((r)*(r))

main(){
    int r;
    cout << "Enter the radius : " << ends;
    cin >> r;
    double area = PI*Square(r);
    cout << "Area of circle is " << area << endl;
}