#include <iostream>
using namespace std;

int length(char str[]) {
    int cnt=0;
    for (int i=0; str[i]!='\0'; ++i) {
        cnt++;
    }
    return cnt;
}

int main() {
    char str[100];
    cout << "Enter your string" << endl;
    cin.getline(str,100,'\n');
    cout << "The length of the string is" << " ";
    int ans = length(str);
    cout << ans << endl;
    cout << "The string is" << " ";
    cout << str << endl;
    return 0;
}