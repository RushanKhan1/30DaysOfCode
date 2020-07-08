#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) { 
        cin >> n >> k;
        if(((k-1) | k) <= n) //when k is even
        {
            cout << k-1 << endl;
        }
        else //when k is odd
        {
            cout << k-2 << endl;
        }
     }

    return 0;
}