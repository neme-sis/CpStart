/*Given an array of numbers, write a program to print all odd numbers in the given array.
Input: Length of array, array elements
Test Case 01 :

Input: array01 = [2, 7, 5, 64, 14]
Output: [7, 5]

Test Case 02 :

Input: array02 = [12, 14, 95, 3, 73]
Output: [95, 3, 73] */

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	for(ll i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		cout<<a[i]<<' ';
	}
	return 0;
}
