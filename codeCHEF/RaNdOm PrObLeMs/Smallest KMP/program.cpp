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
		memset(arr, 0, sizeof(arr));
		string s,k;
		cin >> s;
		cin >> k;
		int ss = s.size(),kk = k.size();
		int lol = 0;
		for(int i = 0; i<ss; i++)
		{
			arr[s[i]-'a']++;
			if(i<kk)
				arr[k[i]-'a']--;
		}
		int i;
		for (i = 0 ; i<(k[0]-'a'); i++)
		{
			for(int j = 0; j<arr[i]; j++)
			{
				cout << (char)(i+(int)'a');
			}
		}
		for(int j = 1; j<kk; j++)
		{
			if(k[j] == k[0])
				continue;
			if(k[j] < i+'a')
				lol = 1;
			else
				lol = 0;
			break;
		}
		if(lol == 0)
		{ 
			for(int j = 0; j<arr[i]; j++)
			{
				cout << (char)(i+(int)'a');
			}
			i++;
			cout << k;
			goto a;
		}
		cout << k;
		a:
		for (; i<26; i++)
		{
			for(int j = 0; j<arr[i]; j++)
			{
				cout << (char)(i+(int)'a');
			}
		}
		cout << endl;

	}
	return 0;
}