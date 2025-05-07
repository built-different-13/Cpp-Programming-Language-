#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int i=0, j=1, k=i+j;
    while(k<=n) {
        if(k==n) {
            cout << n << " is a member of fibonacci series" << endl;
            return 0;
        }
        i = j;
        j = k;
        k = i+j;
    }
    cout << n << " is not a member of fibonacci series" << endl;
    return 0;
}