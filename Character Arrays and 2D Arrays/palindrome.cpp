#include <iostream>
using namespace std;

int length(char str[]) {
    int cnt=0;
    for (int i=0; str[i]!='\0'; ++i) {
        cnt++;
    }
    return cnt;
}

bool isPalindrome(char str[]) {
    int output = length(str);
    int i=0, j=output-1;
    while(i<j) {
        if(str[i]!=str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char str[100];
    cout << "Enter your string" << endl;
    cin >> str;
    bool result = isPalindrome(str);
    if(result) {
        cout << "The given string is Palindrome" << endl;
    } else {
        cout << "The given string is not Palindrome" << endl;
    }
    return 0;
}