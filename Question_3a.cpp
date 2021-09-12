//Write a program to remove duplicates from: (a)A sorted array.
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
    int j = 0;	// To store index of next unique element
    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])	//Checking for duplicate elements
            arr[j++] = arr[i];
    arr[j++] = arr[n-1];
    return j;	//It will return the count of unique elements
}
int main()
{
    int n;		
	cin>>n;			//Taking size of array as n
	int arr[n]; 	// Taking array of size n
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    n = removeDuplicates(arr, n);
    // Printing the updated array
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}
