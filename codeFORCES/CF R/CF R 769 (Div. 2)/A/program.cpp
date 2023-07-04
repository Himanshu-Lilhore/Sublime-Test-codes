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
		int size;
		string s;
		cin >> size;
		cin >> s;
		//cout << size << " " << s << endl;

		int ans = 1;
		if(size>2)
			ans = 0;
		else
		{
			if(size == 1)
			{
				ans = 1;
			}
			else if (size == 2)
			{
				if(s[0] == s[1])
					ans = 0;
			}
		}
		if(ans == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}