#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The decimal conversion of the number is" << " ";
    int dec = 0;
    int k = 1;
    while(n!=0) {
        dec = dec + (n%10)*k;
        k*=2;
        n/=10;
    }
    cout << dec << endl;
    return 0;
}