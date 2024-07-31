/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O

int main ()
{
	init_code();
	//fastio();
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int n, m;
		cin >> n >> m;
		long long int arr[n], brr[n];
		long long int input, sum = 0, upper=n-1, lower=0, mid;
		for(int i = 0; i<n; i++)
		{
			cin >> input;
			arr[i] = brr[i] = input;
			sum += input;
		}
		sort(brr, brr+n);
		long long int crr[n+1];
		crr[0] = 0;
		for(int i = 1; i<=n; i++)
		{
			crr[i] = brr[i-1]+crr[i-1];
		}
		// int brrcount = 0;
		// int ncount = n;
		mid = (upper+lower) / 2;
		while(mid != upper || mid!=lower)
		{
			if(crr[mid]-crr[lower] <= m)  // sum from 0 to (mid-1)th (including) element
			{
				if( crr[mid]-crr[lower] + crr[upper+1]-crr[mid] - brr[mid-1](upper-mid+1) > m)
				{
					upper = mid;
					mid = (upper+lower) /2;
				}
				else if(  crr[mid]-crr[lower] + crr[upper+1]-crr[mid] - brr[mid-1](upper-mid+1) < m )
				{
					lower = mid;
					mid = (upper+lower) /2;
				}
				else
				{
					
				}
			}
			else
			{
				upper = mid;
				mid = (upper+lower) /2;
			}
		}
	}
	
	return 0;
}


void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}
void fastio()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}