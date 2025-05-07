#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "Enter the 1st number" << endl;
    cin >> a;
    cout << "Enter the 2nd number" << endl;
    cin >> b;
    int gcd=1, i=1;
    while(i<=a || i<=b) {
        if(a%i==0 && b%i==0) {
            gcd = i;
        }
        i++;
    }
    cout << "The GCD of given two numbers is" << " ";
    cout << gcd << endl;
    return 0;
}