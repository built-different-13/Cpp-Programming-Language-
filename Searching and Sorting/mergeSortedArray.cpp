#include <iostream>
using namespace std;

void merge(int input1[], int size1, int input2[], int size2, int output[]) {
    int i=0, j=0, k=0;
    while(i<size1 && j<size2) {
        if(input1[i]<input2[j]) {
            output[k]=input1[i];
            i++;
            k++;
        } else {
            output[k]=input2[j];
            j++;
            k++;
        }
    }
    while(i<size1) {
        output[k]=input1[i];
        i++;
        k++;
    }
    while(j<size2) {
        output[k]=input2[j];
        j++;
        k++;
    }
    for (int d=0; d<k; ++d) {
    cout << output[d] << " ";
    }
}

int main() {
    int size1;
    cout << "Enter the size of array 1" << endl;
    cin >> size1;
    int input1[1000];
    cout << "Enter the elements of the array 1" << endl;
    for (int i=0; i<size1; ++i) {
        cin >> input1[i];
    }
    int size2;
    cout << "Enter the size of the array 2" << endl;
    cin >> size2;
    int input2[1000];
    cout << "Enter the elements of the array 2" << endl;
    for (int i=0; i<size2; ++i) {
        cin >> input2[i];
    }
    int output[1000];
    cout << "The Merged Sorted array is printed below" << endl;
    merge(input1,size1,input2,size2,output);
    return 0;
}