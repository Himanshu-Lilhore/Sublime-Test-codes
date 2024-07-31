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
	
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int n, x;
		cin >> n >> x;
		if(n == 1)
		{
			cout << x << endl;
			continue;
		}
		vector<long long int> v(n);
		int inix = x;
		long long int power = ceil(log2(x));
		int loopint = n - 1;
		if(n > power+2)
			power = n -2;
		int y = 0;
		for(int i = 0;i <= loopint; i++)
		{
			long long int add = pow(2,power);
			if(add > x)
			{
				v[y]+=add;
				y = (i+1)%n;
				v[y]+=add;
			}
			else
			{
				v[y]+=add;
				y = (i+1)%n;
				x=x-add;
			}
			power--;
		}
		for(int j=0; j<n; j++)
		{
			cout << v[j] << " ";
		}
		cout << endl;
	}
	return 0;
}