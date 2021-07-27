/*Given an array. The task is to find the sum and average of the array. Average of the array is
defined as the sum of the elements divided by the number of the elements.
Input: Length of array, array elements
Test Case 01 :
Input: [4, 5, 1, 2, 9, 7, 10, 8]
Output:
sum = 46
average = 5.75

Test Case 02 :
Input: [15, 9, 55, 41, 35, 20, 62, 49]
Output:
sum = 286
average = 35.75*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	double sum=0,avg;
	cin>>n;
	double a[n];
	for(long i=0;i<n;i++){
	cin>>a[i];
	sum+=a[i];
	}
	avg=(sum/n);
	cout<<sum<<endl;
	cout<<fixed<<setprecision(2)<<avg;
	return 0;
}

