#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows" << endl;
    cin >> n;
    cout << "The Pattern is printed below" << endl;
    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=i) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}