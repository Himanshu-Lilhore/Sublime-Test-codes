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
		string s;
		cin >> s;
		//char* ss = &(s[0]);
		char* temp;
		char* prefix;
		int tlen, plen;
		int size = s.size();
		A:
		bool isEqual = true;
		for(int i = size-1; i>0; i--)
		{
			prefix = &(s[0]);
			plen = i;
			for(int j = 1; j <= size-i; j++)
			{
				temp = &(s[j]);
				tlen = i;
				isEqual = true;
				for(int k = 0; k<tlen; k++)
				{
					if(temp[k] != prefix[k])
					{
						isEqual = false;
						break;
					}
				}
				if(isEqual == true)
				{
					size = size - i;
					s = &(s[i]);
					//s = s.substr(i, size-i);
					goto A;
				}
			}
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