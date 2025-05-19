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
            break;
        }
        d++;
    }
    if(divided) {
        cout << n << " is not a Prime number" << endl;
    } else {
        cout << n << " is a Prime number" << endl;
    }
    return 0;
}