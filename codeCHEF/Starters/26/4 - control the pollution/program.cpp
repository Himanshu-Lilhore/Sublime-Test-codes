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
		int n, x, y;
		cin >> n >> x >> y ;
		long long int ans = 0, min = INT_MAX, expense = 0;
		for(int bus = 0; bus*100 < n+100; bus++)
		{
			expense = bus*x + y*(ceil((((n- bus*100.0) < 0)?0:(n- bus*100.0))/4));
			if(expense < min)
				min = expense;
		}
		// if(x <= y)
		// 	ans = x*ceil(n/100);
		// else if(25*y <= x)
		// 	ans = y*ceil(n/4);
		// else
		// {
		// 	ans = x*n/100 + y*ceil((n%100)/4);
		// }
		cout << min << endl;
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