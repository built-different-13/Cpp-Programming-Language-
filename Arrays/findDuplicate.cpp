#include <iostream>
using namespace std;

int duplicateNumber(int input[], int n) {
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            if(j==i) {
                continue;
            }
            if(input[j]==input[i]) {
                return input[i];
            }
        }
    }   
}

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int input[1000];
    cout << " Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> input[i];
    }
    cout << "The Duplicate Number that is present in the array is" << " ";
    int ans = duplicateNumber(input,n);
    cout << ans << endl;
    return 0;
}