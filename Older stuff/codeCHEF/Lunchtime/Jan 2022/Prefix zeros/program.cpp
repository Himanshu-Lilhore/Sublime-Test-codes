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
	while(testCases--)
	{
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int prefix = 0;
		int debt = 0;
		int last = 10;
		int cur = 0;
		for(int i = 0 ; i<n ; i++)
		{
			cur = s[i] - '0';
			if(last <= cur)
				{
					prefix++;
					last = cur;
				}
			else
			{
				if(debt+10-cur >= k)
				{
					if(last == 10)
					{
						debt += 10-cur;
						prefix++;
						last = cur;
						continue;
					}
					if(debt+ (10-cur) + 10-(last+(10-cur))%10 >= k)
						{
							prefix++;
							debt += (10-cur) + 10-(last+(10-cur))%10;
						}
					else
						break;
				}
			}
		}
		cout << prefix << endl;
	}
	return 0;
}