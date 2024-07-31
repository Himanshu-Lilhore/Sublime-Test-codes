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
		long long int n, input;
		cin >> n;
		vector<long long int> a(n);
		vector<long long int> b(n);
		for(int i = 0 ; i<n; i++)
		{
			cin >> input;
			a[i] = input;
		}
		for(int i = 0 ; i<n; i++)
		{
			cin >> input;
			b[i] = input;
		}
		long long int ans = 0;
		vector<long long int> req(n);
		for(int i = 0; i<n; i++)
		{
			req[i] = b[i] - a[i];
			if(a[i] > b[i])
			{
				ans = -1;
			}
		}
		if(ans == -1) 
		{
			cout << ans << endl;
			continue;
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