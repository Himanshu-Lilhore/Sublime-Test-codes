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
		long long int l,r,a;
		cin >> l >> r >> a;
		long long int ans;
		//int same = l/a + l%a, sameCount = 0;
		if(r - r%a -1 < l)
		{
			ans = r/a + r%a;
		}
		else
		{
			ans = fmax(fmax((r - r%a - 1)/a + (r - r%a - 1)%a , (r - r%a)/a + (r - r%a)%a), r/a + r%a);
		}
		cout << ans << endl;
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