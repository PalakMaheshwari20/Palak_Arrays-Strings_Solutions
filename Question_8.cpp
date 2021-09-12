//Write a program to segregate/sort an array of 0s, 1s and 2s without using any of the above sorting algorithms.
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
	for(int i=0;i<n;i++){	//Printing the segregated array
	cout<<arr[i]<<" ";
	}
	
}
