#include <iostream>
using namespace std;

void replaceCharacter(char str[], char c1, char c2) {
    for (int i=0; str[i]!='\0'; ++i) {
        if(str[i]==c1) {
            str[i]=c2;
        }
    }
    cout << str;
}

int main() {
    char str[100];
    cout << "Enter the string name" << endl;
    cin >> str;
    char c1;
    cout << "Enter the character c1" << endl;
    cin >> c1;
    char c2;
    cout << "Enter the character c2" << endl;
    cin >> c2;
    cout << "The updated string is printed below" << endl;
    replaceCharacter(str,c1,c2);
    return 0;
}