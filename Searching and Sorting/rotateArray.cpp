#include <iostream>
using namespace std;

void rotate(int input[], int d, int n) {
    int arr[d];
    for (int i=0; i<d; ++i) {
        arr[i]=input[i];
    }
    int j=0;
    for (int i=d; i<n; ++i) {
        input[j] = input[i];
        j++;
    }
    for (int i=0; i<d; ++i) {
        input[j]=arr[i];
        j++;
    }
    for (int i=0; i<n; ++i) {
        cout << input[i] << " ";
    }
}

int main() {
    int t;
    cout << "Enter the number of testcases" << endl;
    cin >> t;
    while(t--) {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int input[1000];
    cout << "Enter the elements of the array" << endl;
    for (int i=0; i<n; ++i) {
        cin >> input[i];
    }
    int d;
    cout << "Enter the rotation number" << endl;
    cin >> d;
    cout << "The updated array is printed below" << endl;
    rotate(input,d,n);
}
return 0;
}