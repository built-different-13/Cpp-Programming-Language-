#include <iostream>
using namespace std;

int main() {
    int b[100][100];
    int m;
    cout << "Enter the number of rows" << endl;
    cin >> m;
    int n;
    cout << "Enter the number of columns" << endl;
    cin >> n;
    for (int i=0; i<m; ++i) {
        cout << "Enter the elements of " << i << "th row" << endl;
        for (int j=0; j<n; ++j) {
            cin >> b[i][j];
        }
    }
    for (int i=0; i<m; ++i) {
        cout << "The elements of the " << i << "th row is printed below" << endl;
        for (int j=0; j<n; ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0; 
}