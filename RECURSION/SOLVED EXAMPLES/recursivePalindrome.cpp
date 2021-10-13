// This is algoritm checks if a given input string is palindrome recursively...

#include <iostream>

using namespace std;

bool recursivePalindrome(string s, int curr=0) {
    if(curr==(s.length()/2)) return true;
    return (s[curr]==s[s.length()-curr-1] && recursivePalindrome(s, curr+1));
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    if(recursivePalindrome(s)) cout << s << " is a Palindrome";
    else cout << s << " is not a Palindrome";

    return 0;
}
