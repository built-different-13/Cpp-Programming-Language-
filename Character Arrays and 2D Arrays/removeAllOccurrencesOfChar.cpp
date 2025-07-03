#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
int len = strlen(input);
int i=0;
for (int j=0; j<len; j++) {
    if(input[j]!=c) {
        input[i]=input[j];
        i++;
    }
}
input[i]='\0';
cout << input << endl;
}

int main() {
    char input[1000];
    cout << "Enter your string" << endl;
    cin.getline(input,1000,'\n');
    char c;
    cout << "Enter the character which has to be removed" << endl;
    cin >> c;
    cout << "The updated string is printed below" << endl;
    removeAllOccurrencesOfChar(input,c);
    return 0;
}