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
		int n ;
		cin >> n;
		int arr[n];
		arr[0] = 1; arr[1] = 3, arr[2] = 2;
		for(int i = 3; i<n; i++)
		{
			arr[i] = i+1;
		}
		if(n == 3)
		{
			cout << 1 << " " << 3 << " " << 2 << endl;
			cout << 3 << " " << 2 << " " << 1 << endl;
			cout << 3 << " " << 1 << " " << 2 << endl;
		}
		else
		for(int i = 0; i<n; i++)
		{
			int count = 0;
			for(int j = i; count<n; count++)
			{
				cout << arr[j] << " ";
				j++;
				if(j == n) j = 0;
			}
			cout << endl;
		}

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