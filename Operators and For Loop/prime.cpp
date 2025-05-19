#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    bool divided = false;
    for (int d=2; d<n; ++d) {
        if(n%d==0) {
            divided = true;
        }
    }
    if(divided) {
        cout << n << " is not a Prime Number" << endl;
    } else {
        cout << n << " is a Prime Number" << endl;
    }
    return 0;
}