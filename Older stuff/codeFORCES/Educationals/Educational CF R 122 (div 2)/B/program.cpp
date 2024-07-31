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
	int ans = -1;
	while(testCases--)
	{
		int zero = 0 , one = 0;
		string s;
		cin >> s;
		int ss = s.size();
		for(int i = 0; i<ss; i++)
		{
			if(s[i] == '1')
			{
				one++;
				continue;
			}
			zero++;
		}
		if(ss == 1 || ss == 2)
			ans = 0;
		else
		{
			if(one == zero)
				ans = one-1;
			else
				ans = fmin(one, zero);
		}
		cout << ans << endl;
	}
	return 0;
}