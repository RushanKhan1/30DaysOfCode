#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
class Book{  //Base class Book has a pure virtual function hence making it an abstract class.
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0; //Pure virtual function.

};

class MyBook : public Book
{
    public:
    int price;
    MyBook(string ti, string auth, int cost) : Book(ti, auth)
    {
        title = ti;
        author = auth;
        price = cost; 
    }

void display() //Function that overrides the dispay function in the base class.
{
    cout << "Title: " << title <<  endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
}
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook nov(title, author, price);
    nov.display();
    return 0;
}
