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
        if(a>b) {
            cout << "A is larger than B" << endl;
        } else {
            cout << "A is smaller than B" << endl;
        }
    }
    return 0;
}