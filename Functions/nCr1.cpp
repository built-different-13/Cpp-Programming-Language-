#include <iostream>
using namespace std;

int factorial(int n) {
    int fact=1, i=1;
    while(i<=n) {
        fact*=i;
        i++;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int r;
    cout << "Enter the value of r" << endl;
    cin >> r;
    cout << "The nCr of " << n << " and " << r << " is ";
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);
    int ans = (fact_n)/((fact_r)*(fact_n_r));
    cout << ans << endl;
    return 0;
}