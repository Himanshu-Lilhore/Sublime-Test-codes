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
		int n;
		cin >> n;
		string s;
		cin >> s;
		multiset<char> ms;
		for(int i = 0; i<n; i++)
		{
			ms.insert(s[i]);
		}
		int i = 0;
		bool ans = true;
		for(auto it = ms.begin(); it != ms.end(); it++)
		{
			if((*it) != s[i] && (*it) != s[n-i-1])
			{
				ans = false;
				break;
			}
			i++;
			if(i > n/2) break;
		}
		if( ans == true ) cout << "YES" << endl;
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