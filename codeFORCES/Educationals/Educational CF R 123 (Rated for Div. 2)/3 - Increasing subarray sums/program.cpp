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
		int n, x;
		cin >> n >> x;
		int arr[n], input;
		for(int i = 0; i<n; i++)
		{
			cin >> input;
			arr[i] = input;
		}
		

		int sumarr[n+1];
		sumarr[0]= 0;
		for(int i = 1; i<=n; i++)
		{
			sumarr[i] = sumarr[i-1] + arr[i-1];
		}
		// cout << "sum arr : " ;
		// for(int i = 0; i<=n; i++)
		// {
		// 	cout << sumarr[i] << " ";
		// }
		// cout << endl;


		int max = 0;
		vector<int> v;
		v.push_back(0);
		for(int i = 1; i<=n; i++) // size of subarray
		{
			int sum = 0, max = INT_MIN;
			for(int j = 0; j<=n-i; j++)  // summing up all subarray of i size
			{
				sum = sumarr[j+i] - sumarr[j];
				// for(int m = 0; m<i; m++)
				// {
				// 	sum += arr[m+j];
				// }
				if(sum > max) max = sum;
			}
			v.push_back(max);
		}

		// for(int y= 0 ; y<v.size(); y++)
		// {
		// 	cout << v[y] << " ";
		// }

		for(int k = 0; k<=n; k++)
		{
			int max = INT_MIN;
			for(int h = 0; h<v.size(); h++)
			{
				int u = fmin(h,k);
				if(v[h]+u*x > max)
					max = v[h]+u*x;
			}
			cout << max << " ";
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