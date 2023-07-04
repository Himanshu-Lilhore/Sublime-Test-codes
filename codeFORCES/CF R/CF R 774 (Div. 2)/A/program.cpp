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
		long long int n, s;
		cin >> n >> s;
		long long cal = (n-1)*(n+1);
		if( cal >= s )
			cout << 0 << endl;
		else
		{
			if(n == 1 && s == 0) cout << 0 << endl;
			else if(n == 1 && s == 1) cout << 1 << endl;
			else if(n == 1 && s == 2) cout << 2 << endl;
			else
			cout << fixed << (int) (ceil( (1.0 *(s - cal)) / (n*n - (n-1) )) )<< endl;
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