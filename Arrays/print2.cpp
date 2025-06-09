#include <iostream>
using namespace std;

void printArray(int input[], int n) {
    for (int i=0; i<n; ++i) {
        cout << input[i] << " ";
    }
}

int main() {
    int input[4] = {5,67,98};
    cout << "The Elements of the array are printed below" << endl;
    printArray(input,4);
    return 0;
}