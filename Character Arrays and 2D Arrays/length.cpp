#include <iostream>
using namespace std;

int length(char input[]) {
    int cnt=0;
    for (int i=0; input[i]!='\0'; ++i) {
        cnt++;
    }
    return cnt;
}

int main() {
    char string[100];
    cout << "Enter your string" << endl;
    cin >> string;
    cout << "The length of the given string is" << " ";
    int ans = length(string);
    cout << ans << endl;
    return 0;
}