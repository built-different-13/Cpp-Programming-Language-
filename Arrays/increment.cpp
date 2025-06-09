#include <iostream>
using namespace std;

void increment(int a, int input[], int n) {
    a++;
    input[0]++;
}

int main() {
    int a = 10;
    int input[4] = {1,2,3};
    increment(a,input,4);
    cout << a << " " << input[0] << endl;
    return 0;
}