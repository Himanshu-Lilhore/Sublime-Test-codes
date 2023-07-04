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
		long long int n,m;
		cin >> n >> m;
		long long int arr[m][2], input1, input2;
		multimap<long long int, long long int> m1;  // weight, index in arr
		for(long long int i = 0; i<m; i++)
		{
			cin >> input1 >> input2;
			arr[i][0] = input1; // coordinate
			arr[i][1] = input2; // weight
			m1.insert({input2, i});
		}
		long long int sum = 0;
		multimap<long long int, long long int> m2; // coordinate, index in arr
		int count = 0;
		for(auto it = m1.begin(); count < 2*n; it++)
		{
			sum += (*it).first;
			m2.insert( { arr[(*it).second][0], (*it).second } );
			count++;
		}
		//int diff = 0;

		/*for(auto it = m2.begin(); it != m2.end(); it++)
		{
			cout << (*it).first << endl;
		}*/


		auto beg = m2.begin(), en = m2.end();
		en--;
		cout << sum << endl;
		for(int i = 0; i<n; i++)
		{
			cout << (*beg).second +1 << " " << (*en).second +1 << endl;
			beg++; en--;
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