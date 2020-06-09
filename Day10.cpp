#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c = 1, max = 0;
    bool flag = false;
    string bin;
    bin = "";
    cin >> n;
    while(n > 0) //converting to binary.
    {
        if(n % 2 == 0)
        {
            bin = '0' + bin;
        }
        else
        {
            bin = '1' + bin;
        }
        n = n / 2;
    }
    for(int i = 0; i < bin.length(); i++) //counting the number of continous ones.
    {
        if(bin[i] == '1'){
            if(flag == true){
            c++;
            }
            flag = true;
        }
        else{
            flag = false;
            c = 1;
        }
        max = c > max ? c : max;
    }
    cout << max << endl;
    return 0;
}