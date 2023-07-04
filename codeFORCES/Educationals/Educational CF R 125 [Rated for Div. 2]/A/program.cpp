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
		int x, y;
		cin >> x >> y;
		if(x == 0 && y == 0)
			cout << 0 << endl;
		else
		{
			double d = sqrt(x*x + y*y);
			if(ceil(d) == d)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 2 << endl;
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