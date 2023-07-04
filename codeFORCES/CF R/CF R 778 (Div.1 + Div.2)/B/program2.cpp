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
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		string s;
		cin >> s;
		int tlen, plen;
		int size = s.size();
		bool found = false;
		char c;
		for(int i=0 ; i<size-1; i++)
		{
			c = s[0];
			found = false;
			for(int j = 1; j<size; j++)
			{
				if(c == s[j])
				{
					s = &s[1];
					found = true;
					break;
				}
			}
			if(found == false)
				break;
		}
		cout << s << endl;
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