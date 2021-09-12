//Write a program to reverse an array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;		
	cin>>n;			//Taking size of array as n
	int arr[n]; 	// Taking array of size n
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	reverse(arr,arr+n);	//Using a built-in function to reverse the array
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<" ";
	}
}

