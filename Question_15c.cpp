//Maximum difference of two elements in an array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;		
	cin>>n;	//Taking size of array as n
	int arr[n]; // Taking array of size n
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);	//Sorting the array using in-built function in ascending order
	int diff = arr[n-1]-arr[0]; //Because arr[0] has the smallest element in the array and arr[n-1] has the largest
	cout<<diff;
return 0;
}
