#include <iostream>
using namespace std;

void print2dArray(int a[][100], int m, int n) {
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[100][100];
    int m;
    cout << "Enter the number of rows" << endl;
    cin >> m;
    int n;
    cout << "Enter the number of columns" << endl;
    cin >> n;
    for (int i=0; i<m; ++i) {
        cout << "Enter the elements of the " << i << "th row" << endl;
        for (int j=0; j<n; ++j) {
            cin >> a[i][j];
        }
    }
    cout << "The elements of the 2D Array are printed below" << endl;
    print2dArray(a,m,n);
    return 0;
}