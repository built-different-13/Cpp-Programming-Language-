#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    if(n%2==0) {
        cout << "The above given number is Even" << endl;
    } else {
        cout << "The above given number is Odd" << endl;
    }
    return 0;
}