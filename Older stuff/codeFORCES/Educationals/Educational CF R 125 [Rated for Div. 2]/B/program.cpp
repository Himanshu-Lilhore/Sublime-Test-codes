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
		long long int n, b, x, y;
		cin >> n >> b >> x >> y;
		long long int last = 0, cur, sum = 0;
		for(int i = 1; i<=n; i++)
		{
			if(last+x <=b)
			{
				sum += last+x;
				last = last+x;
			}
			else
			{
				sum += last-y;
				last = last-y;
			}
		}
		cout << sum << endl;
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