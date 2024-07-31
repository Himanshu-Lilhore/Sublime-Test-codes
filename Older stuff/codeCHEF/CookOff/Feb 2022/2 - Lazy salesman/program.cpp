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
		int n, w, input, total = 0;
		cin >> n >> w;
		int arr[n];
		for(int i = 0 ; i<n ; i++)
		{
			cin >> input;
			arr[i] = input;
			total += input;
		}
		sort(arr,arr+n);
		int sum = 0, count = 0;

		// for(int i = 0; i<n; i++)
		// {
		// 	cout << arr[i] << " ";
		// }
		// cout << endl;

		for(int i = 0; i<n; i++)
		{
			if(total-w < sum)
			{
				break;
			}
			if(sum+arr[i] > total-w) break;
			sum += arr[i];
			count++;
		}
		cout << count << endl;
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