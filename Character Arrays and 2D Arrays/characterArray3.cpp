#include <iostream>
using namespace std;

int main() {
    char name[100];
    cout << "Enter your name" << endl;
    cin >> name;
    name[4]='x';
    name[3]='d';
    name[1]='\0';
    cout << "Your name is" << " ";
    cout << name << endl;
    return 0;
}