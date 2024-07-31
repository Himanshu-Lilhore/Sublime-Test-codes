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
	
	int n, q;
	cin >> n >> q;
	vector<pair<int, set<int>>> v;
	int element;
	auto it = v.begin();
	for(int i=0; i<n; i++)
	{
		cin >> element;
		v.push_back(element);
	}

	for(int i=0; i<q; i++)
	{
		string query;
		cin >> query;
		queryType = query[0];
		int x = 0,y = 0;
		int spaces = 0;
		for(int h=0; h<query.length(); h++)
		{
			char c = query[h];
			if(c == 0)
				break;
			if(c == ' ')
			{
				spaces++;
				continue;
			}
			if (spaces == 0)
			{
				spaces = 1;
				continue;
			}
			if(spaces == 1)
			{
				x = 10*x + (int)c;
				continue;
			}
			if(spaces == 2)
			{
				y = 10*y + (int)c;
				continue;
			}
		}
		if(queryType == 1)
		{
			v.insert(it + x-1, y);
		}
		else
		{
			for(int y=0; y<x; y++)
			{
				
			}
		}
	}
	return 0;
}