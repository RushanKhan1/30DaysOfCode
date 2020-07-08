#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, n, c;
  cin >> t;
  for(int i = 0; i < t; i++) //Finding prime numbers in O(√n) time complexity
    {
      c = 0;
      cin >> n;
      for(int j = 2; j <= sqrt(n); j++)
	  {
	    if(n % j == 0){
	      c++;
	    }
	  }
     if(n == 1 || n == 0)
     {
       cout << "Not prime" << endl;
       continue;
     }
      if(c >= 1){
	cout << "Not prime" << endl;
      }
	else cout << "Prime" << endl;
  }
  return 0;
}
	     
