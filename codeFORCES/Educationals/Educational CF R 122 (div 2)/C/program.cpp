/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

int main ()
{
	init_code();
	
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		long long int ch, cd, mh, md, k, w, a;
		cin >> ch >> cd;
		cin >> mh >> md;
		cin >> k >> w >> a;
		long long int chh, cdd;
		int ans = 0;
		for(int i = 0; i<=k; i++)
		{
			cdd = cd + (k-i)*w;
			chh = ch + i*(a);
			// int twist = 1;
			long long int chot = ceil((chh*1.0) / md);
			// if(chot == floor((chh*1.0) / md))
			// 	twist = 0;
			//cout << (mh*1.0)/chot << endl;
			//cout << (chh*1.0)/(chot-1) << endl;
			if(((mh*1.0)/chot) <= cdd && (chh*1.0)/(chot-1) >= md)
				ans = 1;
		}
		if(ans == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}