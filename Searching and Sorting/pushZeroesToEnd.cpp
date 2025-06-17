#include <iostream>
using namespace std;

void pushZeroesToEnd(int input[], int size) {
    int k=0;
    for (int i=0; i<size; ++i) {
     if(input[i]!=0) {
        input[k] = input[i];
        k++;
     }
    }
    while(k<size) {
        input[k]=0;
        k++;
    }
    for (int d=0; d<size; ++d) {
        cout << input[d] << " ";
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
    cout << "The updated array is printed below" << endl;
    pushZeroesToEnd(input,n);
    return 0;
}