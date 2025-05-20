#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    long long i=1, ans=0;
    while((i*i)<=n) {
        ans = i;
        i+=1;
    }
    cout << "The Square root of " << n << " is ";
    cout << ans << endl;
    return 0;
}