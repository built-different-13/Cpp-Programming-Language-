#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int sumEven=0;
    int sumOdd=0;
    while(n!=0) {
        int temp = n%10;
        if(temp%2==0) {
            sumEven+=temp;
        } else {
            sumOdd+=temp;
        }
        n/=10;
    }
    cout << "The sum of even digits is" << " ";
    cout << sumEven << endl;
    cout << "The sum of odd digits is" << " ";
    cout << sumOdd << endl;
    return 0;
}