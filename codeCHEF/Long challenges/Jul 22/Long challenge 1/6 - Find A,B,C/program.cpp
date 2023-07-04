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
		int a=0,b=0,c=0;
		int comp = 0, input;
		int arr[n+1];
		for(int i = 0; i<=n; i++)
		{
			cin >> input;
			arr[i] = input;
			cout << "h3" << endl;   //remove
		}
		for(;a<=n;a++)
		{
			for(;b<=n;b++)
			{
				for(;c<=n;c++)
				{
					comp = 0;
					for(int i = 0; i<=n; i++)
					{
						if( (a^i) + (b^i) + (c^i) != arr[i])
						{
							cout << a <<" " << b << " " << c << " " <<  "h1" << endl;   //remove
							comp = 0;
							break;
						}
						else
						{
							cout << a <<" " << b << " " << c << " ";   // remove
							cout << "h2" << endl;   //remove
							comp++;
						}
					}
					if(comp == n+1)
					{
						break;
					}
				}
				if(comp != n+1) c = 0;
				if(comp == n+1)
				{
					break;
				}
			}
			if(comp != n+1) b = 0;
			if(comp == n+1)
			{
				break;
			}
		}
		cout << a << " " << b << " " << c << endl;
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