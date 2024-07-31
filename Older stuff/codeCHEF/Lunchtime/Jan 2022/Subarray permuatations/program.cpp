/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

int main ()
{
	init_code();
	
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int n,k;
		cin >> n >> k;
		for(int i = 1; i<=n; i++)
		{
			if(n!=1 && k<2)
			{
				cout << -1;
				break;
			}
			if(i<k)
				{
					cout << i <<" ";
				}
			else if(i == k)
			{
				cout << n << " ";
			}
			else
				{
					cout << i-1 << " ";
				}
		}
		cout << endl;
	}
	return 0;
}