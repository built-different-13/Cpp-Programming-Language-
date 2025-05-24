#include <iostream>
using namespace std;

int celsius(int n) {
    int ans = (n-32)*(5.0/9);
    return ans;
}

int main() {
    int S,E,W;
    cout << "Enter the start value" << endl;
    cin >> S;
    cout << "Enter the end value" << endl;
    cin >> E;
    cout << "Enter the difference value" << endl;
    cin >> W;
    cout << "The Fahrenheit to Celsius temperature are printed below" << endl;
    while(S<=E) {
        int cel = celsius(S);
        cout << S << "\t" << cel << endl;
        S+=W;
    }
    return 0;
}