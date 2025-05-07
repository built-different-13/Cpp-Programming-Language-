#include <iostream>
using namespace std;
int main() {
    char a;
    cout << "Enter the character" << endl;
    cin >> a;
    if(a>=65 && a<=90) {
        cout << "The given character is Uppercase Character" << endl;
    } else {
        if(a>=90 && a<=122) {
            cout << "The given character is Lowercase Character" << endl;
        } else {
            cout << "The given character is neither Uppercase nor Lowercase" << endl;
        }
    }
    return 0;
}