#include <iostream>
using namespace std;

int main() {
    char name[100];
    cout << "Enter your name" << endl;
    cin >> name;
    name[8]='x';
    cout << "Your name is" << " ";
    cout << name << endl;
    return 0;
}