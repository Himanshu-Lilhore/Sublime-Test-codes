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
		long long int n, m, x, y, xx, yy;
		cin >> n >> m;
		cin >> x >> y;
		cin >> xx >> yy;
		//x++; y++; xx++; yy++;
		int onesColor = (x+y) % 2;
		if( (x+y) % 2 == (xx+yy) % 2)
		{
			for(int i = 1; i<=n; i++)
			{
				for(int j = 1; j<=m; j++)
				{
					if(i == x && j == y)
					{
						cout << 1 << " ";
						continue;
					}
					if(i == xx && j == yy)
					{
						cout << 2 << " ";
						continue;
					}
					if( (i+j) % 2 == onesColor )
						cout << 1 << " ";
					else
						cout << 3 << " ";
				}
				cout << endl;
			}
		}
		else
		{
			for(int i = 1; i<=n; i++)
			{
				for(int j = 1; j<=m; j++)
				{
					if( (i+j) % 2 == onesColor )
						cout << 1 << " ";
					else
						cout << 2 << " ";
				}
				cout << endl;
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