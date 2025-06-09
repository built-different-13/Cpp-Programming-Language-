#include <iostream>
using namespace std;

void reverse(int input[], int n) {
    int i=0, j=n-1;
    while(i<j) {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }

    for (int k=0; k<n; ++k) {
        cout << input[k] << " ";
    }
}

int main() {
    int input[5] = {1,2,3,4,5};
    cout << "The Reverse of the Array is Printed below" << endl;
    reverse(input,5);
    return 0;
}