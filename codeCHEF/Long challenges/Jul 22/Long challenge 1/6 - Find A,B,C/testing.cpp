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
		for(int a = 1; a<=n; a++)
		{
			for(int b = 1; b<=n; b++)
			{
				for(int c = 1; c<=n; c++)
				{
					if( a == b || b == c || a == c) continue;
					int ax, bx, cx;
					cout << "n = " << n << " | a = " << a << ", b = " << b << ", c = " << c << endl;
					set<int> ss;
					//int arr[n+1];
					cout << "{ ";
					for(int i=0; i<=n; i++)
					{
						//cout << i << " : ";
						ax = a^i;
						bx = b^i;
						cx = c^i;
						int sum = ax+bx+cx;
						//arr[i] = sum;
						cout << sum << ",";
						ss.insert(sum);
						//cout << ax << "+" << bx << "+" << cx << " = " << sum << endl;
					}
					cout << " }" << endl;
					cout << "Min = " << *(ss.begin()) << " | Max = " << *(--ss.end()) << endl;
				}
			}
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