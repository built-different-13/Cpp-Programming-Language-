#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int i=0, j=1;
    cout << "The Fibonacci numbers between 0 and " << n << " are printed below" << endl;
    cout << 0 << " " << 1 << " ";
    int k=i+j;
    while (k<=n) {
        cout << k << " ";
        i = j;
        j = k;
        k = i+j;
    }
    return 0;
}