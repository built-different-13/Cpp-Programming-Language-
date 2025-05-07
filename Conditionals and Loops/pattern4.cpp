#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    int i=1, k;
    while(i<=n) {
        int j=1, k=i;
        while(j<=i) {
            cout << k << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}