#include <iostream>
using namespace std;

void selectionSort(int input[], int n) {
    for (int i=0; i<n-1; ++i) {
        int min=input[i], minIndex=i;
        for (int j=i+1; j<n; ++j) {
            if(input[j]<min) {
                min=input[j];
                minIndex=j;
            }
        }
        int temp = input[i];
        input[i] = input[minIndex];
        input[minIndex] = temp;
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
    cout << "The elements of array are sorted below" << endl;
    selectionSort(input,n);
    return 0;
}