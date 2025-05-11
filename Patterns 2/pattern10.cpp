#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "The Pattern is Printed below" << endl;
    for (int i=0; i<=(n/2)+1; i++) {
        for (int j=1; j<=((n/2)+1)-i; j++) {
            cout << " " << " ";
        }
        for (int k=1; k<=i; k++) {
            cout << "*" << " ";
        }
        for (int s=i-1; s>=1; s--) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int p=1; p<=n/2; p++) {
        for (int t=1; t<=p; t++) {
            cout << " " << " ";
        }
        for (int d=1; d<=(n)-((n/2)+p); d++) {
            cout << "*" << " ";
        }
        for (int r=1; r<=(n/2)-p; r++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}