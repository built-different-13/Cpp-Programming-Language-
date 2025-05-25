#include <iostream>
using namespace std;

void B() {
    cout << 5 << " ";
}

void A(int a) {
    cout << 1 << " ";
    B();
    cout << 2 << " ";
}

int main() {
    int n=10;
    cout << 3 << " ";
    A(n);
    cout << 4 << endl;
    return 0;
}