#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
class Difference
{
    private:
    vector<int> elements;
    public:
    int maximumDifference;
    Difference(vector<int> ar)
    {
        elements = ar;
    }
    int computeDifference() //Calculating the maximum difference.
    {
        int n = elements.size();
        sort(elements.begin(), elements.end());
        maximumDifference = abs(elements.at(n - 1) - elements.at(0));
        return maximumDifference;
    }
};
int main()
{
    int n, x;
    vector<int> nums;
    cin >> n; //number of elements.
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    Difference dif(nums);
    cout << dif.computeDifference() << endl;
    return 0;
}