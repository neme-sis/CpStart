/*Given an array, print the value obtained after multiplying all numbers in that array.
Input: Length of array, array elements
Test Case 01 :
Input : array01 = [1, 2, 3]
Output : 6
Explanation: 1*2*3=6

Test Case 02 :
Input : array02 = [3, 2, 4]
Output : 24 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	double m=1;
	cin>>n;
	long long a[n];
	for(long i=0;i<n;i++){
	cin>>a[i];
	m*=a[i];
	}
	cout<<m;
	return 0;
}
