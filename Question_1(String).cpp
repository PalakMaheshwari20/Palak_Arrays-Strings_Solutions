//Write a program to check if a user-input string is palindrome or not.
#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string S)
{
    string P = S;  	//Stores the reverse of the string S
    
    reverse(P.begin(), P.end());	// Reversing the string P
    if (S == P) {
        return "Yes";
    }
    else {
        return "No";
    }
}
int main()
{
    string S;
    cin>>S;
    cout << isPalindrome(S);
    return 0;
}
