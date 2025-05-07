#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=n-i) {
            cout << " ";
            j++;
        }
        int k=1;
        while(k<=i) {
            cout << "*";
            k++;
        }
        int s=1;
        while(s<=i-1) {
            cout << "*";
            s++;
        }
        cout << endl;
        i++;
    }
    return 0;
}