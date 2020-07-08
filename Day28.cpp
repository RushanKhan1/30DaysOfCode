#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    int N;
    cin >> N;
    vector <string> database; //here we will store the email ids.
    vector <string> firstname; //storing all the first names in this vector.
    vector <string> gmailIDs;
    regex reg ("(@gmail.com)"); //we need to search for @gmail.com
    smatch matches;
     string firstName, emailID;
    for (int N_itr = 0; N_itr < N; N_itr++) { 
        cin >> firstName >> emailID;
        if(regex_search(emailID, matches, reg) == true)
        {
            firstname.push_back(firstName);
            database.push_back(emailID);
        }
    }
    sort(firstname.begin(), firstname.end());
    for(int i = 0; i < firstname.size(); i++)
    {
        cout << firstname.at(i) << endl;
    }
    return 0;
}
