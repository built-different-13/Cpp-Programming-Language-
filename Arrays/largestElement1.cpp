#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[1000];
    cout << "Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }
    cout << "The maximum element of the array is" << " ";
    int max = arr[0];
    for (int i=0; i<n; ++i) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}