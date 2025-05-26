#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[1000];
    int sum=0;
    cout << "Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
        sum+=arr[i];
    }
    cout << "The sum of the elements of the array is" << " ";
    cout << sum << endl;
    return 0;
}