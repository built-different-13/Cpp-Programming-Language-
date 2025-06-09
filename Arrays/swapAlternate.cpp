#include <iostream>
using namespace std;

void swapAlternate(int input[], int n) {

    for (int i=0; i<n-1; i+=2) {
        int temp = input[i];
        input[i] = input[i+1];
        input[i+1] = temp;
    }

    for (int i=0; i<n; ++i) {
        cout << input[i] << " ";
    }
}

int main() {
    int input[9] = {9, 3, 6, 12, 4, 32, 5, 11, 19};
    cout << "The alternate swapped elements are printed below" << endl;
    swapAlternate(input,9);
    return 0;
}