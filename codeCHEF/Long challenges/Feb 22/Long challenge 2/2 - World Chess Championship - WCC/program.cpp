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
		int x;
		cin >> x;
		cin >> s;
		int carlson=0, chef=0, draw=0, carlsonwon=0;
		for(int i = 0; i<14; i++)
		{
			if(s[i] == 'C')
				carlson++;
			else if(s[i] == 'N')
				chef++;
			else
				draw++;
		}
		if(carlson > chef)
			carlsonwon = 60*x;
		else if(carlson == chef)
			carlsonwon = 55*x;
		else
			carlsonwon = 40*x;
		cout << carlsonwon << endl;
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