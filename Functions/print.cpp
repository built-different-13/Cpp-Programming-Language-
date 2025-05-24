#include <iostream>
using namespace std;

void print(int n) {
    int i=1;
    while(i<=n) {
        cout << i << " ";
        ++i;
    }
}

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The numbers from 1 to " << n << " is printed below" << endl;
    print(n);
    return 0;
}