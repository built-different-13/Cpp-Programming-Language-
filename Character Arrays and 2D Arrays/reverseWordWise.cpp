#include <iostream>
using namespace std;

int length(char str[]) {
    int cnt=0;
    for (int i=0; str[i]!='\0'; ++i) {
        cnt++;
    }
    return cnt;
}

void reverse(char str[]) {
    int stringLength = length(str);
    int i=0, j=stringLength-1;
    while(i<j) {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

void reverseStringWordWise(char input[]) {
   reverse(input);
   int i=0, j=0, k=j;
   while(input[i]!='\0') {
       if(input[i]==' ') {
           k=i;
           int d=j, s=k-1;
           while(d<s) {
               int temp = input[d];
               input[d] = input[s];
               input[s] = temp;
               d++;
               s--;
           }
           j=k+1,k=j;
       }
       i++;
   }
   int d=j,s=i-1;
   while(d<s) {
       int temp = input[d];
       input[d] = input[s];
       input[s] = temp;
       d++;
       s--;
   }
   cout << input;
}

int main() {
    char str[1000];
    cout << "Enter your string" << endl;
    cin.getline(str,1000,'\n');
    cout << "The updated string is printed below" << endl;
    reverseStringWordWise(str);
    return 0;
}