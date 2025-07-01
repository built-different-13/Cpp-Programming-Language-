#include <iostream>
using namespace std;

void spiralPrint(int input[][100], int nRows, int nCols)
{
    int top=0, left=0, bottom=nRows-1, right=nCols-1;

    while(top<=bottom && left<=right) {

        for (int i=left; i<=right; i++) {
            cout << input[top][i] << " ";
        }
        top++;

        for(int i=top; i<=bottom; i++) {
            cout << input[i][right] << " ";
        }
        right--;

   if(top<=bottom) {
    for(int i=right; i>=left; i--) {
        cout << input[bottom][i] << " ";
    }
    bottom--;
   }

   if(left<=right) {
    for(int i=bottom; i>=top; i--) {
        cout << input[i][left] << " ";
    }
    left++;
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
    cout << "The Spiral Print is printed below" << endl;
    spiralPrint(a,m,n);
    return 0;
}