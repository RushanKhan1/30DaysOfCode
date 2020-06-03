#include <bits/stdc++.h>
using namespace std;
class Person {
  public:
  int age;
  Person(int initialAge)
  {
      if(initialAge < 0)
      {
          cout << "Age is not valid, setting age to 0." << endl;
          initialAge = 0;
          age = initialAge;
      }
      else
      age = initialAge;
  }
      void amIOld();
      void YearPasses();
};
   //Person() = default; //This is the default constructor.
   void Person::YearPasses() //no need to pass an argument since this is an instance method.
  {
      age++;
  }
  void Person::amIOld() 
  {
      if(age < 13) cout << "You are young." << endl;
      else if(age >= 13 && age < 18) cout << "You are a teenager." << endl;
      else cout << "You are old." << endl;
  }  
int main()
{
    int t;
    int age;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
       cin >> age;
       Person object(age);
       object.amIOld();
       for(int j = 0; j < 3; j++)
       {
           object.YearPasses();
       }
       object.amIOld();
       cout << endl;
    }
    return 0;
}