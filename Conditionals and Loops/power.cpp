#include <iostream>
using namespace std;
int main() {
    int x,n;
    cout << "Enter the value of x" << endl;
    cin >> x;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "The x raise to power n is" << " ";
    int product=1, i=1;
    while(i<=n) {
        product*=x;
        i++;
    }
    cout << product << endl;
    return 0;
}