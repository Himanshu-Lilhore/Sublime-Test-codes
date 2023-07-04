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
		long long int x, y, xx, yy, xxx, yyy;
		cin >> x >> y;
		cin >> xx >> yy;
		cin >> xxx >> yyy;
		if(y == yy)
		{
			if(y!=0)
			cout << fixed << setprecision(12) << sqrt((yy - y)*(yy - y) + (xx - x)*(xx - x) ) << endl;
			else
			cout << 0 << endl;
		}
		else if(yy == yyy)
		{
			if(yy!=0)
			cout << fixed << setprecision(12) << sqrt((yyy - yy)*(yyy - yy) + (xxx - xx)*(xxx - xx) ) << endl;
			else
			cout << 0 << endl;
		}
		else if(y == yyy)
		{
			if(y!=0)
			cout << fixed << setprecision(12) << sqrt((yyy - y)*(yyy - y) + (xxx - x)*(xxx - x) ) << endl;
			else
			cout << 0 << endl;
		}
		else
			cout << 0 << endl;
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