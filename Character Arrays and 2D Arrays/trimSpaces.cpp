#include <iostream>
using namespace std;

void trimSpaces(char str[]) {
    int j=0;
    for (int i=0; str[i]!='\0'; ++i) {
        if(str[i]!=' ') {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    cout << str;
}

int main() {
    char str[1000];
    cout << "Enter the string" << endl;
    cin.getline(str,1000,'\n');
    cout << "The updated string is printed below" << endl;
    trimSpaces(str);
    return 0;
}