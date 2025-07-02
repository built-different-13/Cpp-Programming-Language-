#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    int len = strlen(input);
    int i=0;
    for (int j=0; j<len; j++) {
        if(input[j]!=input[j+1]) {
            input[i]=input[j];
            i++;
        }
    }
    input[i]='\0';
    cout << input << endl;
}

int main() {
    char input[1000];
    cout << "Enter the string" << endl;
    cin >> input;
    cout << "The updated string is printed below" << endl;
    removeConsecutiveDuplicates(input);
    return 0;
}