#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    int i=1;
    int k=1;
    while(i<=n) {
        int j=1;
        while(j<=i) {
            cout << k << " ";
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}