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
		long long int n, k, input;
		cin >> n >> k;
		vector<long long int> v(n);
		multiset<long long int> ms;
		for(int i = 0; i<n; i++)
		{
			cin >> input;
			v[i] = input;
			ms.insert(input);
		}	
		long long int sum = 0, lastCost = 0, itemCount = 0;
		for(auto it = ms.begin(); it != ms.end(); it++)
		{
			sum += (*it);
			if(sum > k)
			{
				sum -= (*it);
				sum += ceil( (*it)/2.0 );
				if(sum <= k)
					itemCount++;
				break;
			}
			else
			{
				itemCount++;
			}
		}
		cout << itemCount << endl;
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