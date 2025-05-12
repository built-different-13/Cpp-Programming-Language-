#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The numbers from 1 to " << n << " are printed below" << endl;
    for(int i=1; i<=n; ++i) {
     cout << i << endl;
    }
    return 0;
}