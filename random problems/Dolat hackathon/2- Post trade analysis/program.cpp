/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O

int returnans(vector<int> *pairReturn, int x, vector<pair<int,int>> *v, int k, vector<int> *offbits)
{
	long long int ini = *(pairReturn+k);
	if(ini < *(pairReturn+*(pairReturn+(*(v+k).first - 1) )))
		
	if(returnans(pairReturn, x, v, k, offbits) == 0)
		return 0;
	else return 1;

}

int main ()
{
	init_code();
	//fastio();
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		long long int x;  // x
		cin >> x;
		long long int ans = 0;

		long long int input;
		vector<pair<long int, long long int>> v;  // B, r for i th trade
		for(int i = 0; i<x; i++)
		{
			cin >> input;
			v.push_back({input, 0});
		}
		int allneg = 1;
		for(int i = 0; i<x; i++)
		{
			cin >> input;
			v[i].second = input;
			if(input > 0) allneg = 0;
		}
		if(allneg == 1) ans = 0;
		else
		{
			vector<int> pairReturn;
			for(int i = 0; i<x; i++)
			{
				pairReturn.bush_back(v[i].second + v[(v[i].first) - 1].second);
			}
			vector<int> offbits(x);
			memset(offbits, 1, sizeof(offbits));
			for(int i = 0; i<x; i++)
			{
				if(returnans(pairReturn, x, v, i, offbits) == 1)
				{
					ans += pairReturn[i];
					offbits[i] = offbits[(v[i].first) - 1] = 0;
				}
			}
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