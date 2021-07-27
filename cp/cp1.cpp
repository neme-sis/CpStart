/*Input an array, swap the first and last element of the array.
Input: Length of array, array elements
Sample: Input-  5
			    26 51 42 63 21
		Output- 21 51 42 63 26 */

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
	ll temp=a[n-1];
	a[n-1]=a[0];
	a[0]=temp;
	for(ll i=0;i<n;i++)
	cout<<a[i]<<' ';
}
