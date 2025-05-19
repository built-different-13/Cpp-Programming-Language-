#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    // Base Case
    if(n==1 || n==2) {
        cout << 1 << endl;
        return 0;
    }

    int i=1, j=1, k=i+j;
    for (int cnt=3; cnt!=n; cnt++) {
        i=j;
        j=k;
        k=i+j;
    }
    
    cout << "The " << n << "th Fibonacci number is" << " ";
    cout << k << endl;
    return 0;
}