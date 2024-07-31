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
	fastio();
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int n, ops;
		cin >> n >> ops;
		string s;
		cin >> s;
		char rev_s[n];
		int diffchar = 0;
		if(n == 1)
			goto tt;
		for(int i = 0, j = n-1; i<n; i++,j--)
		{
			rev_s[i] = s[j];
			//cout << rev_s[i];
		}
		//cout << endl;
		
		for(int i = 0; i<n/2; i++)
		{
			if(((int)rev_s[i]-'0')^((int)s[i]-'0') == 1)
				diffchar++;
		}
		tt:
		if(diffchar == ops)
			cout << "YES" << endl;
		else if(diffchar < ops)
		{
			if((ops - diffchar)%2 == 0)
				cout << "YES" << endl;
			else
				{
					if(n%2 == 1)
						cout << "YES" << endl;
					else
						cout << "NO" << endl;
				}
		}
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