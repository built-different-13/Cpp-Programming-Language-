#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The reverse of the number " << n << " is ";
    int rev=0;
    while(n!=0) {
        rev = (rev*10)+n%10;
        n/=10;
    }
    cout << rev << endl;
    return 0;
}