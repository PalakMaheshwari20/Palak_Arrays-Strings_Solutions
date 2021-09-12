#include <bits/stdc++.h>
using namespace std;
int main ()
{
   int i, j,temp,n;
   cin>>n;				//Taking the size of the array from user
   int a[n];
   for(i = 0; i<n; i++) {
      cin>>a[i];
   }
   for(i = 0; i<n; i++)
   {
   	    for(j = i+1; j<n; j++)
   		{
      		if(a[j] < a[i]) {	//Swapping the elements of array
         		temp = a[i];
         		a[i] = a[j];
         		a[j] = temp;
      		}
   		}
	}
	for(i = 0; i<n; i++) {		//Printing sorted array
   		cout <<a[i]<<"\t";
	}
return 0;
}
