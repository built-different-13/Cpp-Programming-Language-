#include <iostream>
using namespace std;

int findUnique(int input[], int n) {
    for (int i=0; i<n; ++i) {
        int ans = input[i];
        for (int j=0; j<n; ++j) {
            if(j==i) {
                continue;
            }
            if(input[j]==input[i]) {
                ans=-1;
                break;
            }
        }
        if(ans!=-1) {
            return ans;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int input[100];
    cout << "Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> input[i];
    }
    cout << "The Unique element in the array is" << " ";
    int ans = findUnique(input,n);
    cout << ans << endl;
    return 0;
}