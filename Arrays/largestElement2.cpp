#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[1000];
    int max = INT_MIN;
    cout << "Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    cout << "The Largest element of the array is" << " ";
    cout << max << endl;
    return 0;
}