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
	int n,m,input;
	cin >> n >> m;
	int arr[m];
	for(int i = 0; i<m; i++)
	{
		cin >> input;
		arr[i] = input;
	}
	long long int sum;
	int cur, last = arr[0];
	sum = last - 1;
	for(int i = 1; i<m; i++)
	{
		cur = arr[i];
		if(cur >= last)
			sum += cur - last;
		else
			sum += n - (last - cur);
		last = cur;
	}
	cout << sum ;
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