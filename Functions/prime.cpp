#include <iostream>
using namespace std;

bool isPrime(int n) {
    int d=2;
    while(d<n) {
        if(n%d==0) {
            return false;
        }
        d++;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    bool ans = isPrime(n);
    if(ans) {
        cout << n << " is a Prime Number" << endl;
    } else {
        cout << n << " is not a Prime Number" << endl;
    }
    return 0;
}