//Write a program to find the second largest element in an array.
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
	sort(arr,arr+n);	//Sorting the array using in-built function in ascending order
	cout<<arr[n-2];	//Return 2nd last value of the sorted array
}

