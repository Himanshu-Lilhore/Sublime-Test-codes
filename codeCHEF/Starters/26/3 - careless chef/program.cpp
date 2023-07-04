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
		int n ;
		cin >> n;
		long long int input, ev = 0, od = 0;
		for (int i = 0; i<2*n; i++)
		{
			cin >> input;
			if(input%2 == 0) ev++;
			else od++;
		}
		
		if(ev%2 == 0 && od%2 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
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