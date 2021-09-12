/*Write a program to find out the prefix sum array from a given array. Prefix sum array
 is another array of the same size, such that prefixsum[i] = arr[1] + arr[2] + -- + arr[n-1].  */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int sum =0;		
	cin>>n;	//Taking size of array as n
	int arr[n]; // Taking array of size n
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		sum +=arr[j];				// calculating the prefix sum
		arr[j] = sum;				//storing the prefix at the index		
		cout<<arr[j]<<" ";			//printing output
	}
}
