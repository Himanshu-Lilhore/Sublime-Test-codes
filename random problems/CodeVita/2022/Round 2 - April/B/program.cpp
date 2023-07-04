/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O

const int x = 2502;
int arr[x];

void ans (int n)
{
	int index = 0;
	for(int i = 1 ; i<=arr[2500]; i++, index++)
	{
		arr[index] = i;
		if(arr[index] == index+1)
		{
			arr[2501] += arr[2500] - ;
		}
	}
}

int main ()
{
	init_code();
	//fastio();
	memset(arr, 0, sizeof(arr));
	int n;
	cin >> n;
	arr[2500] = n;
	cout << arr[2501];
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