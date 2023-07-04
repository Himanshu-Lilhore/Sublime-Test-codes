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

		int end = ceil(n/2.0);
		int sign;
		if(n%2 == 0) sign = 1;
		else sign = -1;
		int add = 1;
		for(int i = 1; i<=n; i++)
		{
			cout << end << " ";
			end = end + sign*add;
			sign *= -1;
			add++;
		}
		cout << endl;
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