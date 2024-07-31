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
		long long int last = 1;
		if(n>19)
			cout << "NO" << endl;
		else
		{
			cout << "YES" << endl;
			cout << 1 << " ";
			for(int i =1; i<n; i++)
			{
				last = (last)*3;
				cout << last << " ";
			}
			cout << endl;
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