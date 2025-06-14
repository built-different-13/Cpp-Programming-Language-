#include <iostream>
using namespace std;

void insertionSort(int input[], int n) {
    for (int i=1; i<n; ++i) {
        int j, current=input[i];
        for (j=i-1; j>=0; --j) {
            if(input[j]>current) {
                input[j+1]=input[j];
            } else {
                break;
            }
        }
        input[j+1]=current;
    }
    for (int k=0; k<n; ++k) {
        cout << input[k] << " ";
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
    insertionSort(input,n);
    return 0;
}