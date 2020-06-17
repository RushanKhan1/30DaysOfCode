#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
class Calculator{
    public:
    int n, p;
    Calculator()
    {
        n = 0;
        p = 0;
    }
    int power(int a, int b)
    {
            if( a < 0 || b < 0)
            {
                throw runtime_error("n and p should be non-negative");
            }
        return pow(a, b);
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Calculator calc=Calculator();
    int t,n,p;
    cin >> t;
    while(t-->0){
        cin >> n >> p;
         try{
               int ans=calc.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& s){
             cout << s.what() << endl;
         }
    }
    return 0;
}