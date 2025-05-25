#include <iostream>
using namespace std;

int factorial(int n) {
    int ans=1;
    for (int i=1; i<=n; ++i) {
        ans*=i;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The Factorial of " << n << " is ";
    int output = factorial(n);
    cout << output << endl;
    return 0;
}