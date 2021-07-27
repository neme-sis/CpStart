/*Given an array of numbers, write a program to count Even and Odd numbers in that array.
Input: Length of array, array elements
Test Case 01 :

Input: array01 = [2, 7, 5, 64, 14]
Output: Even = 3, odd = 2

Test Case 02 :

Input: array02 = [12, 14, 95, 3]
Output: Even = 2, odd = 2 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,ct=0;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	for(ll i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		ct++;
	}
	cout<<"even= "<<(n-ct)<<" , odd= "<<ct;
	return 0;
}
