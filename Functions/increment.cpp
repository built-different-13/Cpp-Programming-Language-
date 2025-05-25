#include <iostream>
using namespace std;

int increment(int a) {
     a++;
     return a;
}

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int ans = increment(n);
    cout << ans << endl;
    cout << n << endl;
    return 0;
}