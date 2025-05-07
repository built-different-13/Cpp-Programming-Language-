#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the count of numbers" << endl;
    cin >> n;
    int cnt=1, max=0;
    while(cnt<=n) {
        int number;
        cout << "Enter the number" << endl;
        cin >> number;
        if(number>max) {
            max = number;
        }
        cnt++;
    }
    cout << "The maximum number is" << " ";
    cout << max << endl;
    return 0;
}