#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int fine = 0;
    int day, month, year;
    int eday, emonth, eyear;
    cin >> day >> month >> year;
    cin >> eday >> emonth >> eyear;
    if(year < eyear) //calculating if there is no fine
    {
        cout << "0" << endl;
        exit(0);
    }
    else if(month < emonth && year == eyear) 
    {
        cout << "0";
        exit(0);
    }
    else if(day < eday && month == emonth)
    {
        cout << "0";
        exit(0);
    }
    if(year > eyear) //finding the fine
    {
        cout << "10000" << endl;
    }
    else if(month > emonth)
    {
        fine = 500 * (month - emonth);
        cout << fine << endl;
    }
    else if(day > eday)
    {
        fine = 15 * (day - eday);
        cout << fine << endl;
    }
    else cout << fine << endl;
}