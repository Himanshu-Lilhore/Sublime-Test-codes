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
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ones = 0, zeros = 0;
		for(int i = 0; i<n; i++)
		{
			if(s[i] == '1')
				ones++;
			else
				zeros++;
		}
		if(n%2 == 0)
		{
			if(ones%2 == 0)
				cout << "Yes" << endl;
			else
			{
				if(ones == zeros)
					cout << "Yes" << endl;
				else
					cout << "No" << endl;
			}
		}
		else
		{
			cout << "Yes" << endl;
		}
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