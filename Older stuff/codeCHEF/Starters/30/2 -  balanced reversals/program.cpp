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
		string a;
		int n;
		cin >> n;
		cin >> a;
		int one = 0, zero = 0;
		for(int i = 0; i<n; i++)
		{
			if(a[i] == '1') one++;
			else zero++;
		}
		for(;;)
		{
			if(zero>0)
			{
				cout << "0";
				zero--;
			}
			else
			{
				cout << "1";
				one--;
			}
			if(zero <=0 && one<= 0) break;
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