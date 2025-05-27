#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    int index=-1;
    for (int i=0; i<n; ++i) {
        if(arr[i]==x) {
            index=i;
        }
    }
    return index;
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
    int x;
    cout << "Enter the element to be search" << endl;
    cin >> x;
    cout << "The index of the element to be search is" << " ";
    int ans = linearSearch(arr,n,x);
    cout << ans << endl;
    return 0;
}