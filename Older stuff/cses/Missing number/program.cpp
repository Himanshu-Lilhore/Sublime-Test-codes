/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

int main ()
{
	init_code();
	
	int n;
	cin >> n;
	int arr[n];
	memset(arr, 0 , sizeof(arr));
	int t;
	for(int i = 0; i<n ; i++)
	{
		cin >> t;
		arr[t-1]++;
	}
	for(int i= 0 ; i<n ; i++)
	{
		if(arr[i] == 0)
		{
			cout << i+1;
			break;
		}
	}
	return 0;
}