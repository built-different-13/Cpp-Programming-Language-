#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    int len = strlen(input);
    int max=INT_MIN;
    char ans;
    for (int i=0; i<len; i++) {
        int temp=0;
        for (int j=0; j<len; j++) {
            if(input[j]==input[i]) {
                temp++;
            }
        }
        if(temp>max) {
            max=temp;
            ans=input[i];
        }
    }
    return ans;
}

int main() {
    char input[1000];
    cout << "Enter the string" << endl;
    cin.getline(input,1000,'\n');
    cout << "The highest occurring character is" << " ";
    char output = highestOccurringChar(input);
    cout << output << endl;
    return 0;
}