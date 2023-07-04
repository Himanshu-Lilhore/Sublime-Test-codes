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
		// edge cases
		long long int a, b;
		cin >> a >> b;
		if(a == 0 ^ b == 0)
		{
			cout << -1 << endl;
			continue;
		}
		if(a == 0 && b == 0)
		{
			cout << 0 << endl;
			continue;
		}
		if(a == b)
		{
			cout << a << endl;
			continue;
		}

		// putting big number in big
		long long int small, big;
		if(a < b)
		{
			small = a;
			big = b;
		}
		else
		{
			big = a;
			small = b;
		}

		long long int gap = big - small;
		long long int ans = 0;

		if(gap <= small)
		{
			ans = big + 1;
		}
		else
		{
			double d = (1.0*big)/small;
			int slog =  floor( log2(d) );  // to calculate best possible value of small just below big
			//int blog = ceil( log2(d) );

			//gap = big - pow(2,slog)*small;
			ans += slog;
			ans += big + 1;
		}
		cout << ans << endl;
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