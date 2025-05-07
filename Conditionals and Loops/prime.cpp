#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int d=2;
    bool divided = false;
    while(d<n) {
        if(n%d==0) {
            divided = true;
        }
        d++;
    }
    if(divided) {
        cout << "The given number is not Prime" << endl;
    } else {
        cout << "The given number is Prime" << endl;
    }
    return 0;
}