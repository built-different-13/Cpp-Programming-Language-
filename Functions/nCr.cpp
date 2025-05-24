#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int r;
    cout << "Enter the value of r" << endl;
    cin >> r;
    int i=1;
    int fact_n = 1;
    while(i<=n) {
        fact_n = fact_n * i;
        i++;
    }
    i=1;
    int fact_r = 1;
    while(i<=r) {
        fact_r = fact_r * i;
        i++;
    }
    i=1;
    int fact_n_r = 1;
    while(i<=(n-r)) {
        fact_n_r = fact_n_r * i;
        i++;
    }
    cout << "The nCr of " << n << " and " << r << " is ";
    int ans = fact_n/((fact_r)*(fact_n_r));
    cout << ans << endl;
    return 0;
}