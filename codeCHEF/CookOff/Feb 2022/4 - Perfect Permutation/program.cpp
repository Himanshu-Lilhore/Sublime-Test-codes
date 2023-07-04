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
		long long int arr[n], pool[n];
		long long int largest = n, kcount = k;
		memset(arr,-1, sizeof(arr));
		memset(pool,1,sizeof(pool));
		for(int i = 0; i<n && kcount > 0;)
		{

			if(largest%i == 0)
			{
				arr[i] = largest;
				pool[largest-1] = 0;
				kcount--;
				largest--;
			}
			i++;
			if(i==n) i = 0;
		}
		int found = 0;
		for(int i = 0; i<n; i++)
		{
			if(pool[i] != 0)
			{
				found = 0;
				for(int j = 0; j<n; j++)
				{
					if(arr[j] == -1 && (i+1)%(j+1) != 0)
						{
							arr[j] = i+1;
							found = 1;
						}
				}
				if(found == 0) break;
			}
		}
		if(found == 0)
			cout << -1 << endl;
		else
		{
			for(int i = 0; i<n; i++)
			{
				cout << arr[i] << " ";
			}
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