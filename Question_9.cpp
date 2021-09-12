/*Write a program to find the Leaders in an array. P.S.: Leaders in an array is that element,
which is followed by all elements less than that, to its right.*/
#include <iostream>
using namespace std;
void findLeaders(int arr[], int n) 	//Function to find the leaders in an array
{
    int rightMax =  arr[n-1];
    cout <<rightMax<< " ";	//As rightmost element is always a 'Leader'
     
    for (int i = n-2; i >= 0; i--)
    {
        if (rightMax < arr[i])
        {          
            rightMax = arr[i];
            cout <<rightMax<< " ";
        }
    }   
}
int main()
{
    int n;		
	cin>>n;	//Taking size of array as n
	int arr[n]; // Taking array of size n
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
    findLeaders(arr, n);
    return 0;
}   
