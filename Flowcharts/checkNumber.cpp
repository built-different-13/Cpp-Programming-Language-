#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    if(n>0) {
        cout << "The given number is Positive" << endl;
    } else if(n<0) {
        cout << "The given number is Negative" << endl;
    } else {
        cout << "The given number's value is 0" << endl;
    }
    return 0;
}