#include <iostream>
using namespace std;

int binarySearch(int input[], int n, int target) {
    int start=0, end=n-1;
    while(start<=end) {
        int mid = (start+end)/2;
        if(input[mid]==target) {
            return mid;
        } else if(target<input[mid]) {
            end = mid - 1;
        } else if(target>input[mid]) {
            start = mid + 1;
        }
    }
    return -1;
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
    int target;
    cout << "Enter the target element to be search in the array" << endl;
    cin >> target;
    cout << "The index of the element to be searched is at index" << " ";
    int ans = binarySearch(input,n,target);
    cout << ans << endl;
    return 0;
}