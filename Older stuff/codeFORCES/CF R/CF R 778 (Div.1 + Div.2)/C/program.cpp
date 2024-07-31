/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O

const int cc = 200009;
bool crr[cc];
bool arr[cc];


void check(long long int sum)
{
	cout << "H1" << endl;   // (remove)
	if(sum == 0) 
	{
		cout << "H2" << endl;   // (remove)
		if(arr[0] == true)
			crr[0] = true;
		return;
	}
	if(sum == 1) 
	{
		cout << "H3" << endl;   // (remove)
		if(arr[1] == true)
			crr[1] = true;
		return;
	}
	if(sum > 200008)
	{
		cout << "H4" << endl;   // (remove)
		check(ceil(sum/2.0));
		check(floor(sum/2.0));
	}
	else if(arr[sum] == true)
	{
		cout << "H5" << endl;   // (remove)
		crr[sum] = true;
	}
	else
	{
		cout << "H6" << endl;   // (remove)
		check(ceil(sum/2.0));
		check(floor(sum/2.0));
	}
}


int main ()
{
	init_code();
	//fastio();
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		long long int n;
		cin >> n;
		long long int arr[n], input, sum = 0;
		memset(arr,false, sizeof(arr));
		long long int brr[n];
		for(int i = 0; i<n; i++)
		{
			cin >> input;
			sum += input;
			brr[i] = input;
			arr[input] = true;
			crr[input] = false;
		}
		check(sum);
		int ans = 1;
		for(int i = 0; i<n; i++)
		{
			cout << "H7" << endl;   // (remove)
			if(crr[brr[i]] == false)
			{
				cout << "H8" << endl;   // (remove)
				ans = 0;
				break;
			}
		}
		cout << "H9" << endl;   // (remove)
		if(ans == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
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