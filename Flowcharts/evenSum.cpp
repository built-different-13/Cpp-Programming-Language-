#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int sum=0, i=1;
    while(i<=n) {
        if(i%2==0) {
            sum+=i;
        }
        i++;
    }
    cout << "The sum of even numbers is" << " ";
    cout << sum << endl;
    return 0;
}