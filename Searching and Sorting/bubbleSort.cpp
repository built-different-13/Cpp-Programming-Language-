#include <iostream>
using namespace std;

void bubbleSort(int input[], int n) {
    for (int i=0; i<n-1; ++i) {
        for (int j=0; j<n-1-i; j++) {
            if(input[j]>input[j+1]) {
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
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
    cout << "The sorted array is printed below" << endl;
    bubbleSort(input,n);
    return 0;
}