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
	
	int arr[26];

	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		memset(arr, 0 , sizeof(arr));
		int n, q, c;
		cin >> n >> q;
		string s;
		cin >> s;
		int ss = s.size();
		int ans = 0;
		for(int i = 0 ; i < ss; i++)
		{
			arr[s[i]-'a']++;
		}
		while(q--)
		{
			cin >> c;
			ans = 0;
			for(int i = 0 ; i<26; i++)
			{
				if(arr[i] > c)
					ans += arr[i] - c;
			}
			cout << ans << endl;
		}

	}
	return 0;
}