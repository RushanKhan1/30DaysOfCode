#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution {
    public:
    stack <char> st;
    queue <char> q;
    void pushCharacter(char ch)
    {
        st.push(ch);
    }
    void enqueueCharacter(char ch)
    {
        q.push(ch);
    }
    char popCharacter()
    {
        char c;
        c = st.top();
        st.pop();
        return c;
    }
    char dequeueCharacter()
    {
       char c;
        c = q.front();
        q.pop();
        return c;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; //storing the string here
    getline(cin, s);
    Solution obj; //creating the object of the class Solution
    
    for (int i = 0; i < s.length(); i++) { //inserting the elements of the string to the stack and queue.
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;

    for (int i = 0; i < s.length() / 2; i++) {  //checking if the characters are equal and then popping both the stack and the queue.
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    if (isPalindrome == true) { //checking if palindrome or not.
        cout << "The word, " << s << ", is a palindrome." << endl;
    } else {
        cout << "The word, " << s << ", is not a palindrome." << endl;
    }
    
    return 0;
}