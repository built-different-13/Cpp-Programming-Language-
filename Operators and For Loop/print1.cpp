#include <iostream>
using namespace std;
int main() {
    int i;
    cout << "Enter the first number" << endl;
    cin >> i;
    int j;
    cout << "Enter the second number" << endl;
    cin >> j;
    cout << "The numbers from " << i << " to " << j << " are printed below" << endl;
    for (; i<=j; ++i) {
        cout << i << endl;
    }
    return 0;
}