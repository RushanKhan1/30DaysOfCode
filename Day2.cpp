#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double mealCost;
    int tipPercent;
    int taxPercent;
    double totalCost;
    cin >> mealCost;
    cin >> tipPercent;
    cin >> taxPercent;
    totalCost =  mealCost + (((double)tipPercent/100) * mealCost) + (((double)taxPercent/100) * mealCost);
    cout << round(totalCost);
    return 0;
}