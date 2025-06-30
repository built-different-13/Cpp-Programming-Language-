#include <iostream>
using namespace std;

void print2dArray2(int a[][5], int m, int n) {
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[][5] = {{1,2},{3,4}};
    cout << "The elements of the 2D Array are printed below" << endl;
    print2dArray2(a,2,5);
    return 0;
}