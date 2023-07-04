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
		string s;
		cin >> s;
		int r = 0, g = 0, b = 0, ans = 1;
		for(int i = 0; i<6; i++)
		{
			if(s[i] == 'r') r = 1;
			if(s[i] == 'g') g = 1;
			if(s[i] == 'b') b = 1;
			if(s[i] == 'R')
			{
				if(r == 1) continue;
				else
				{
					ans = 0;
					break;
				}
			}
			if(s[i] == 'G')
			{
				if(g == 1) continue;
				else
				{
					ans = 0;
					break;
				}
			}
			if(s[i] == 'B')
			{
				if(b == 1) continue;
				else
				{
					ans = 0;
					break;
				}
			}
		}
		if(ans == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
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