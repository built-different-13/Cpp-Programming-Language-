#include <iostream>
using namespace std;

void print2dArray1(int a[][2], int m, int n) {
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[][2] = {{1,2},{3,4}};
    cout << "The elements of the 2D array are printed below" << endl;
    print2dArray1(a,2,2);
    return 0;
}