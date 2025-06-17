#include <iostream>
using namespace std;

void sort012(int arr[], int n)
{
    int k=0;
    int temp[n];
    for (int i=0; i<n; ++i) {
        if(arr[i]==0) {
            temp[k]=0;
            k++;
        }
    }

    for (int i=0; i<n; ++i) {
        if(arr[i]==1) {
            temp[k]=1;
            k++;
        }
    }

    for (int i=0; i<n; ++i) {
        if(arr[i]==2) {
            temp[k]=2;
            k++;
        }
    }

    for (int i=0; i<k; ++i) {
        arr[i]=temp[i];
    }

    for (int i=0; i<n; ++i) {
        cout << arr[i] << " ";
    }
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
    cout << "The Sorted array is printed below" << endl;
    sort012(input,n);
    return 0;
}