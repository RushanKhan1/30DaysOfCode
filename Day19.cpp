#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
class AdvancedArithmetic
{
    public:
    virtual int divisorSum(int n)=0; //creating a pure virual function.
};
class Calculator : public AdvancedArithmetic  //This class extends AdvancedArithmetic class.
{
    public:
    int divisorSum(int n) override
    {
        int sum = 0;
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                sum = sum + i;
            }
        }
        return sum;
    }
};

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    AdvancedArithmetic *obj = new Calculator();
    sum = obj -> divisorSum(n);
    cout << "I implemented: AdvancedArithmetic \n" << sum << endl;

}
