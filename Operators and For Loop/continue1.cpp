#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The numbers are printed below" << endl;
    for (int i=1; i<=n; ++i) {
        if(i==7) continue;
        cout << i << " ";
    }
    return 0;
}