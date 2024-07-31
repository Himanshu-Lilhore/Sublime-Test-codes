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
	long long int n,m,k,input;
	cin >> n >> m >> k;
	int arr[m+1];
	for(int i = 0; i<m+1; i++)
	{
		cin >> input;
		arr[i] = input;
	}
	int friendCount = 0, diffBits, fred = arr[m];
	for(int i = 0; i<m; i++)
	{
		diffBits = 0;
		//cout << arr[i] << endl;
		for(int j = 0; j<=20; j++)
		{
			//cout << ((arr[i]&(1<<j))>>j) << " " << ((fred&(1<<j))>>j) << endl;
			if( ((arr[i]&(1<<j))>>j) == ((fred&(1<<j))>>j) )
				continue;
			else
			{
				diffBits++;
				//cout << "diffBits++" << endl;
			}
		}
		if(diffBits <= k)
		{
			friendCount++;
			//cout << "friendCount++" << endl;
		}
	}
	cout << friendCount;
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