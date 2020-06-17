#include <cmath>
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    try
    {
        cout << stoi(s) << endl;
    }
    catch(exception a)
    {
        cout << "Bad String" << endl;
    }
    return 0;
}