#include <iostream>
using namespace std;

int main() {
    cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(bool) << endl;
    int a = 5;
    int *b = &a;
    cout << sizeof(b) << endl;
    return 0;
}