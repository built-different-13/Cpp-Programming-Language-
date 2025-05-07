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
    if(a+b>c && b+c>a && a+c>b) {
        cout << "It is a valid Triangle" << endl;
    } else {
        cout << "It is not a valid Triangle" << endl;
    }
    return 0;
}