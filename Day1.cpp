#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int i = 4, i2;
    double d = 4.0, d2;
    string s = "HackerRank ";
    string s2;
    cin >> i2;
    cin >> d2;
    cin.ignore();
    getline(cin, s2);
    cout << i + i2 << endl;
    cout << setprecision(1) << fixed;
    cout << d + d2 << endl;
    cout << s + s2 << endl;
    return 0;
}