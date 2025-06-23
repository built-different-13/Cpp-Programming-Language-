#include <iostream>
using namespace std;

int main() {
    int arr[100][100];
    int m;
    cout << "Enter the number of rows" << endl;
    cin >> m;
    int n;
    cout << "Enter the number of columns" << endl;
    cin >> n;
    for (int i=0; i<m; ++i) {
        cout << "Enter the elements of the " << i << "th row" << endl;
        for (int j=0; j<n; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i=0; i<n; ++i) {
        cout << "The elements of the " << i << "th column is printed below" << endl;
        for (int j=0; j<m; ++j) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}