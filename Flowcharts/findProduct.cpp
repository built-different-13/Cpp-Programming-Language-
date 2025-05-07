#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The Product of numbers from 1 to " << n << " is ";
    int product=1, i=1;
    while(i<=n) {
        product*=i;
        i++;
    }
    cout << product << endl;
    return 0;
}