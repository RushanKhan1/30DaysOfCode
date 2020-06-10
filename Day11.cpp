#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ar[6][6];
    int hourglasssum = 0, max = INT16_MIN;
    for (int i = 0; i < 6; i++) //taking input
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> ar[i][j];
        }
    }
    for(int i = 0; i < 6; i++)
    {
        hourglasssum = 0;
        for (int j = 0; j < 6; j++)
        {
            if(i < 4 && j < 4)
            {
                //First adding the top row then the middle element and then the bottom row.
                hourglasssum = ar[i][j] + ar[i][j+1] + ar[i][j+2] + ar[i+1][j+1] + ar[i+2][j] + ar[i+2][j+1] + ar[i+2][j+2];
                max = hourglasssum > max ? hourglasssum : max;
            }
        }
    }
    cout << max << endl;
    return 0;
}