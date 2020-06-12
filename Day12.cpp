#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
class Person{ //Our base class Person.
    public:
    string firstName;
    string lastName;
    int id;
    Person() //Default Constructor
    {
        firstName = "";
        lastName = "";
        id = 0;
    }
};
class Student : public Person {  //Subclass Student that extends the main class Person.
public:
vector <int> scores;
Student(string fName, string lName, int eyedee, vector<int>score)
    {
        firstName = fName;
        lastName = lName;
        id = eyedee;
        scores = score;
    }
char calculate();
void display();

};

char Student :: calculate()  //method of student type to calculate the grade.
{
    int total = 0, avg;
    char c;
    for (int i = 0; i < scores.size(); i++)
    {
        total = total + scores.at(i);
    }
    avg = total/scores.size();
    if(avg <= 100 && avg >= 90){
        c = 'O';
    }
    else if(avg < 90 && avg >= 80){
        c = 'E';
    }
    else if(avg < 80 && avg >= 70)
    {
        c = 'A';
    }
    else if(avg < 70 && avg >= 55)
    {
        c = 'P';
    }
    else if(avg < 55 && avg >= 40)
    {
        c = 'D';
    }
    else if(avg < 40)
    {
        c = 'T';
    }
    return c;   //Returning the grade
}
void Student :: display() //method to display the name and id.
{
    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "ID: " << id << endl;
}

int main()
{
    string firstName;
    string lastName;
    int id, n, x;
    vector <int> scores;
    cin >> firstName >> lastName >> id;
    cin >> n; //number of scores.
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        scores.push_back(x);
    }
    Student obj(firstName, lastName, id, scores);
    obj.display();
    cout << "Grade: " << obj.calculate() << endl;
}