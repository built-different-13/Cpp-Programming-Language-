#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the number of terms" << endl;
    cin >> x;
    int cnt=0;
    int i=1;
    cout << "The first " << x << " terms of the AP is printed below" << endl;
    while(cnt!=x) {
        int k = (3*i)+2;
        if(k%4!=0) {
            cout << k << " ";
            cnt++;
            i++;
        } else {
            ++i;
        }
    }
    return 0;
}