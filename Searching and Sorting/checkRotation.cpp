#include <iostream>
using namespace std;

int checkRotation(int input[], int n) {
    int minIndex=0;
    for (int i=1; i<n; ++i) {
          if(input[i]<input[minIndex]) {
            minIndex=i;
          }
    }
    return minIndex;
}

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int input[1000];
    cout << "Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> input[i];
    }
    cout << "The array is rotated at index" << " ";
    int ans = checkRotation(input,n);
    cout << ans << endl;
    return 0;
}