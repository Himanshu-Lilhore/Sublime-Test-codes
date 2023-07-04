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
		long long int count = 0;
		int n;
		cin >> n;
		long long int arr[n], input;
		for(int i = 0 ; i<n; i++)
		{
			cin >> input;
			arr[i] = (i + 1) - input;
		}
		for(int i = 0; i<n; i++)
		{
			if(arr[i]+count == 0)
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