//Leftmost non-repeating character in a string (assume all characters to be lowercase).
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string S;
	cin>>S;
	for(int j=0;j<S.length();j++)
	{
		if(S[j]!=S[j+1])	//checking for repeating elements
		{
		cout<<S[j];
			break;
		}
	}
	return 0;	//if no element is repeating return 0
}

 
