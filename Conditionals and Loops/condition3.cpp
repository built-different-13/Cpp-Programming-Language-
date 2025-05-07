#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the value of a" << endl;
    cin >> a;
    int b;
    cout << "Enter the value of b" << endl;
    cin >> b;
    if(a==b) {
        cout << "Both the given numbers are equal" << endl;
    } else if(a>b) {
        cout << "A is larger than B" << endl;
    } else if(a<b) {
        cout << "A is smaller than B" << endl;
    }
    return 0;
}