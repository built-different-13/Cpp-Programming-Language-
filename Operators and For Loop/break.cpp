#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << "The numbers are printed below" << endl;
    int i=1;
    while(i<n) {
        cout << i << " ";
        if(i==4) {
            break;
        }
        i++;
    }
    return 0;
}