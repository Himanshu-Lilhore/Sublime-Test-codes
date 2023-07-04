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

long long int summ (long long int n)
{
	if(n == 0) 
		return 3;
	long long total = ((pow(2,n)-pow(2,n-1)-2)/2)*(pow(2,n)-1)+pow(2,n+1)-1;
	return (summ(n-1) + total);
}

int main ()
{
	init_code();
	
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int n ;
		cin >> n;
		long long smaller = floor(log2(n));
		long long sum = 0;
		sum = summ(smaller);
		if(floor(log2(n)) == ceil(log2(n)))
		{
			cout << sum << endl;
			continue;
		}
		else
		{
			for(int i = pow(2, floor(log2(n)))+1; i<=n; i++)
			{
				if(i+1 == n)
					{
						sum += i^(i+1);
						i++;
					}
				else if(i==n)
					sum += i^i;
			}
		}
		cout << sum << endl;
	}
	return 0;
}