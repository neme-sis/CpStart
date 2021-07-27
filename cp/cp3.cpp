/*Given an array and a number x, count the number of occurrences of x in the given array.
Input: Length of array, array elements, value of x
Test Case 01 :

Input : [15, 6, 7, 10, 12, 20, 10, 28, 10]
i. x = 10
Output : 3
10 appears three times in the given array.

Test Case 02 :

Input : lst = [8, 6, 8, 10, 8, 20, 10, 8, 8]
ii. x = 16
Output : 0 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,x,ct=0;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	cin>>x;
	for(ll i=0;i<n;i++)
	{
		if(a[i]==x)
		ct++;
	}
	cout<<ct;
	return 0;
}
