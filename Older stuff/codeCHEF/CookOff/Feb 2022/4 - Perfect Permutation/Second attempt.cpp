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
		long long int n, k;
		cin >> n >> k;
		int ans = 0;
		vector<long long int> arr;
		int i = 0;
		for(i = 0; i<n-1; i++)
		{
			arr.push_back(i+1);
		}
		if(n == k)
			{
				arr.push_back(i+1);
				ans = 1;
			}
		else
		{
			arr.insert(arr.begin()+k, i+1);
			if(arr[k]%(k+1) == 0)
			{
				for(int m = k+1; m<n; m++)
				{
					if(arr[k]%(m+1) != 0 && arr[m]%(k+1) != 0)
					{
						long long int temp = arr[k];
						arr[k] = arr[m];
						arr[m] = temp;
						ans = 1;
						break;
					}
				}
			} 
		}
		if (ans == 0) cout << -1;
		else
		for(int j = 0; j<n; j++)
		{
			cout << arr[j] << " ";
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