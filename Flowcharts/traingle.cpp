#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter the 1st side of the triangle" << endl;
    cin >> a;
    cout << "Enter the 2nd side of the triangle" << endl;
    cin >> b;
    cout << "Enter the 3rd side of the triangle" << endl;
    cin >> c;
    if(a==b && b==c && c==a) {
        cout << "The given triangle is Equilateral Triangle" << endl;
    } else if(a==b || b==c || c==a) {
        cout << "The given triangle is Isosceles Triangle" << endl;
    } else {
        cout << "The given triangle is Scalene Traingle" << endl;
    }
    return 0;
}