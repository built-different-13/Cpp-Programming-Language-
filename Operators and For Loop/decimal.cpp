#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    long bin=0, weight=1;
    while(n!=0) {
        int rem = n%2;
        bin = bin + (rem*weight);
        weight*=10;
        n/=2;
    }
    cout << "The Deciaml to Binary Conversion is" << " ";
    cout << bin << endl;
    return 0;
}