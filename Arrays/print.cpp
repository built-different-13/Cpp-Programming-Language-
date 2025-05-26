#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[100];
    cout << "Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    cout << "The elements of the array are printed below" << endl;
    for (int i=0; i<n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}