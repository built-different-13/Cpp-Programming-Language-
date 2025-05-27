#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i=0; i<n; ++i) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[1000];
    cout << "Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    cout << "The elements of the array are printed below" << endl;
    printArray(arr,n);
    return 0;
}