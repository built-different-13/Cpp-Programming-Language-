#include <iostream>
#include <cstring>
using namespace std;

void wavePrint(int a[][100], int mRows, int nCols) {
    for (int i=0; i<nCols; ++i) {
        if(i%2==0) {
            for (int j=0; j<mRows; ++j) {
                cout << a[j][i] << " ";
            }
        } else {
            for (int j=mRows-1; j>=0; --j) {
                cout << a[j][i] << " ";
            }
        }
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
    cout << "The Wave Print is printed below" << endl;
    wavePrint(a,m,n);
    return 0;
}