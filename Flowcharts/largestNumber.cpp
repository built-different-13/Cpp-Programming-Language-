#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter the 1st number" << endl;
    cin >> a;
    cout << "Enter the 2nd number" << endl;
    cin >> b;
    cout << "Enter the 3rd number" << endl;
    cin >> c;
    if(a>=b && a>=c) {
        cout << "The largest number is" << " " << a << endl;
    } else if(b>=a && b>=c) {
        cout << "The largest number is" << " " << b << endl;
    } else {
        cout << "The largest number is" << " " << c << endl;
    }
    return 0;
}