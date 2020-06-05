#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    string first, second;
    for (int i = 0; i < t; i++){
        cin >> s;
        first = "";
        second = "";
        for (int j = 0; j < s.length(); j++)
        {
            if (j%2 != 0)
            {
                second = second + s[j];
            }
            else
            {
                first = first + s[j];
            }
        }
        cout << first << " " << second << endl;
    }
    return 0;
}