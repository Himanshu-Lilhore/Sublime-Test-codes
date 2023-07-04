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
		int maxt, maxn, sumn;
		cin >> maxt >> maxn >> sumn;
		long long int total;
		if(maxt < sumn/maxn)
			total = (maxt)*(maxn*maxn);
		else
		{
			total = (sumn/maxn)*(maxn*maxn);
			if(sumn/maxn != maxt)
				total += pow(sumn - (sumn/maxn)*(maxn),2);
			 //+ (sumn/maxn == maxt)?0:pow(sumn - (sumn/maxn)*(maxn),2);
		}
		cout << total << endl;
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