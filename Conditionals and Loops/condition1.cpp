#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the number a" << endl;
    cin >> a;
    int b;
    cout << "Enter the number b" << endl;
    cin >> b;
    if(a==b) {
        cout << "The given numbers are equal" << endl;
    } else {
        cout << "The given numbers are not equal" << endl;
    }
    return 0;
}