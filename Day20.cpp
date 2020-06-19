#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, swaps = 0;
    cin >> n;
    int temp;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n -1; j++)
        if(a.at(j) > a.at(j+1)) //swapping if found greater
        {
            temp = a.at(j);
            a.at(j) = a.at(j + 1);
            a.at(j+1) = temp;
            swaps++;
        }
    }
    cout << "Array is sorted in " << swaps << " swaps." << endl;
    cout << "First Element: " << a.at(0) << endl;
    cout << "Last Element: " << a.at(n - 1) << endl; 
    return 0;
}
