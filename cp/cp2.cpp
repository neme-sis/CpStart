/*Given an array and provided the positions of the elements, write a program to swap the two
elements in that array.
Input: Length of array, array elements, pos1, pos2
Test Case 01 :

Input : [23, 65, 19, 90], pos1 = 1, pos2 = 3
Output : [19, 65, 23, 90]

Test Case 02 :

Input : [1, 2, 3, 4, 5], pos1 = 2, pos2 = 5
Output : [1, 5, 3, 4, 2]*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,pos1,pos2;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	cin>>pos1>>pos2;
	ll temp=a[(pos1)-1];
	a[(pos1)-1]=a[(pos2)-1];
	a[(pos2)-1]=temp;
	for(ll i=0;i<n;i++)
	cout<<a[i]<<' ';
}
