#include <iostream>
using namespace std;

// Helper Function
bool isPrime(int n) {
    bool divided = false;
    for (int d=2; d<n; ++d) {
        if(n%d==0) {
            divided = true;
            return false;
        }
    }
    return true;
}

int main() {
int n;
cout << "Enter the number" << endl;
cin >> n;
cout << "All the Prime numbers between 1 and " << n << " are printed below" << endl;
for (int i=2; i<=n; ++i) {
    if(isPrime(i)) {
        cout << i << " ";
    }
}
return 0;
}