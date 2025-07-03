#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char input[], int i, int j) {
    while(i<j) {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

void reverseEachWord(char input[]) {
    int len = strlen(input);
    int i=0,j;
    for (j=0; j<len; j++) {
        if(input[j]==' ') {
            reverseString(input,i,j-1);
            i=j+1;
        }
    }
    reverseString(input,i,j-1);
    cout << input << endl;
}

int main() {
    char input[1000];
    cout << "Enter your string" << endl;
    cin.getline(input,1000,'\n');
    cout << "The updated string is printed below" << endl;
    reverseEachWord(input);
    return 0;
}