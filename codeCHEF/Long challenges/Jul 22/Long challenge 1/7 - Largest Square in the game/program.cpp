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
	fastio();
	int n;
	cin >> n;
	int arr[n];
	int brr[2][n+1];
	memset(brr,0,sizeof(brr));
	int tempVar = 1;
	int a,b;
	int maxSq = 0;
	for(int i = 0; i<n; i++)
	{
		cin >> a >> b;
		for(int k = 1; k<=n; k++)
		{
			if(k-1<a || k-1>b) brr[tempVar][k] = 0;
			else
			{
				brr[tempVar][k] = 1 + min(min(brr[tempVar][k-1], brr[1-tempVar][k]), brr[1-tempVar][k-1]);
				if(brr[tempVar][k] > maxSq)
					maxSq = brr[tempVar][k];
			}
		}
		tempVar = 1 - tempVar;
	}
	cout << maxSq << endl;
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