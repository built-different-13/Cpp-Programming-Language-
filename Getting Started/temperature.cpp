#include <iostream>
using namespace std;
int main() {
    int f;
    cout << "Enter the Fahrenheit temperature" << endl;
    cin >> f;
    cout << "The corresponding celcius temperature is" << " ";
    int cel = (f-32)*(5.0/9);
    cout << cel << endl;
    return 0;
}