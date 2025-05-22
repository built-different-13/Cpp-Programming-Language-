#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the no. of numbers" << endl;
    cin >> n;

    // Check point - 1
    if(n<3) {
        cout << "true" << endl;
        return 0;
    }

    int *arr = new int[n];
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    // Check point - 2
    for (int i=0; i<n; ++i) {
        if(arr[i]==arr[i+1]) {
            cout << "false" << endl;
            return 0;
        }
    }

    int index = -1;
    for (int i=1; i<=n-2; ++i) {
         if(arr[i]<arr[i-1] && arr[i]<arr[i+1]) {
            index = i;
         }
    }

    // Check point - 3
    if(index==-1) {
        cout << "true" << endl;
        return 0;
    }

    for (int i=0; i<=index-2; ++i) {
        if(arr[i]<=arr[i+1]) {
            cout << "false" << endl;
            return 0;
        }
    }

    for (int i=index+1; i<=n-2; ++i) {
        if(arr[i+1]<=arr[i]) {
            cout << "false" << endl;
            return 0;
        }
    }

    delete [] arr;

    cout << "true" << endl;
    return 0;
}