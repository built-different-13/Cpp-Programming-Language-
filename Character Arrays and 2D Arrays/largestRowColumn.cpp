#include <iostream>
#include <climits>
using namespace std;

void findLargest(int a[][100], int m, int n) {
    int sum1=INT_MIN, index1=0, sum2=INT_MIN, index2=0;
    // Check for Row
    for (int i=0; i<m; ++i) {
        int tempSum=0;
        for (int j=0; j<n; ++j) {
            tempSum+=a[i][j];
        }
        if(tempSum>sum1) {
            sum1=tempSum;
            index1=i;
        }
    }
    // Check for Column
    for (int i=0; i<n; ++i) {
        int tempSum=0;
        for (int j=0; j<m; ++j) {
            tempSum+=a[j][i];
        }
        if(tempSum>sum2) {
            sum2=tempSum;
            index2=i;
        }
    }
    // Check Conditions
    if(sum1>sum2) {
        cout << "row" << " " << index1 << " " << sum1 << endl;
    } else if(sum2>sum1) {
        cout << "column" << " " << index2 << " " << sum2 << endl;
    } else if(sum1==sum2) {
        cout << "row" << " " << index1 << " " << sum1 << endl;
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
    cout << "The largest sum is printed below" << endl;
    findLargest(a,m,n);
    return 0;
}