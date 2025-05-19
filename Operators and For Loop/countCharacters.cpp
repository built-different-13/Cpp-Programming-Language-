#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter the Character" << endl;
    c = cin.get();
    int cnt1=0, cnt2=0, cnt3=0;
    while(c!='$') {
        if(c>=97 && c<=122) {
            cnt1++;
        } else if(c>=48 && c<=57) {
            cnt2++;
        } else {
            cnt3++;
        }
        c = cin.get();
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3 << endl;
    return 0;
}