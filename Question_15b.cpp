/*First non-repeating elements in an array.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;		
	cin>>n;	//Taking size of array as n
	int arr[n]; // Taking array of size n
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		if(arr[j]!=arr[j+1])	//checking for repeating elements
		{
		cout<<arr[j];
			break;
		}
	}
}
