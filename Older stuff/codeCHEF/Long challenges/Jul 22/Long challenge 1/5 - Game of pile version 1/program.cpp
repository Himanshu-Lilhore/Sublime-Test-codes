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
		int n;
		cin >> n;
		int instwin = -1;
		long long int arr[n], sum = 0, input;
		for(int i = 0; i<n; i++)
		{
			cin >> input;
			arr[i] = input;
			sum += input;
			if(input == 1) instwin = 1;
		}
		if(instwin == 1)
		{
			cout << "CHEF" << endl;
			continue;
		}
		if((sum - 2*n)%2 != 0)
		{
			cout << "CHEF" << endl;
		}
		else
		{
			cout << "CHEFINA" << endl;
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