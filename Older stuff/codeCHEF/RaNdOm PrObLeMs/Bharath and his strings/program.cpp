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
		string s;
		cin >> s;
		set<char> myset;
		vector<char> v;
		int ss = s.size();
		auto it = myset.begin();
		for(int i = 0 ; i < ss ; i++)
		{
			char c = s[i];
			it = myset.find(c);
			if(it == myset.end())
				{
					myset.insert(c);
					v.push_back(c);
				}
		}
		int size = v.size();
		for(int i = 0; i<size; i++)
		{
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}