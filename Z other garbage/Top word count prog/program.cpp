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
	string s;
	string subs;
	set<string> count;
	vector<string> vec;
	int size;
	ifstream file1("input.txt", ios::in);
	{
		if(file1.is_open())
		{
			while(getline(file1, s))
			{
				size = s.size();
				for(int i = 0; i<size; i++)
				{
					if( (s[i] <= 'a' && s[i] >= 'z') || ((s[i] <= 'A' && s[i] >= 'Z')) )
					{
						subs.push_back(s[i]);
					}
					else
					{
						subs.push_back('\0');
						count.insert(subs);
						vec.push_back(subs);
						subs.clear();
					}
				}
				if(subs != "")
				{
					subs.push_back('\0');
					count.insert(subs);
					vec.push_back(subs);
					subs.clear();
				}
			}
		}
		size = vec.size();
		int num = 0;
		for(auto it = count.begin(); it != count.end(); it++)
		{
			for(int i = 0; i<size; i++)
			{
				if(*it == vec[i])
				{
					num++;
				}
			}
			cout << (*it) << " : " << num << endl;
			num = 0;
		}
	}
	
	return 0;
}


void init_code()
{
	#ifndef ONLINE_JUDGE
	//freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}
void fastio()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}