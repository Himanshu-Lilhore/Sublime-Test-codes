/* 
incomplete - http://codeforces.com/problemset/problem/1619/B
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <iostream>
#include <math.h>
//#include <string>
using namespace std;

void init_code(){
	//fast_io;
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
		long long int n;
		cin >> n;
		int count = 0;
		for(int i =1 ; i<=n ; i++)
		{
			double sq = sqrt(i);
			//cout << sq << endl;
			//double onebythree = 1.0/3;
			double cu = pow (i, 1.0/3);
			//cout << cu << endl;
			if((sq - floor(sq)) == 0  || (cu - floor(cu)) == 0)
				{
					count++;
					//cout << "count update" << endl;
				}
		}
		cout << count << endl;
	}
	return 0;
}