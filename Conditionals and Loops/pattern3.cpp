#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    int i=1,k=1;
    while(i<=n) {
        int j=1;
        while(j<=n-i) {
            cout << " ";
            j++;
        }
        // cout << " ";
        int temp = 1;
        while(temp<=i) {
            cout << k;
            k++;
            temp++;
        }
        cout << endl;
        i++;
    }
    return 0;
}