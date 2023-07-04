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
		string number;
		cin >> number;
		char ans[n+2];
		//ans[n/2 -2]=ans[n/2 -1]=ans[n/2]=ans[n/2 +1]=ans[n/2 +2]='0';
		ans[n+1] = '\0';
		if(number[0] != '9')
		{
			char anss[n+1]; anss[n] = '\0';
			for(int i = 0; i<n/2; i++)
			{
				if(number[i] >= number[n-i-1])
				{
					anss[n-i-1] = number[i] - number[n-i-1] + '0';
					anss[i] = '0';
				}
				else
				{
					anss[i] = number[n-i-1] - number[i] + '0';
					anss[n-i-1] = '0';
				}
			}
			if(n%2 != 0) anss[n/2] = '0';
			cout << anss << endl;
			// for(int i = 0; i<n; i++)
			// {
			// 	cout << anss[i];
			// }
			// cout << endl;
			/*
			 923099
			9000200

 			923099   number
			x90000x   (ans)
			9x00000   sum

			*/
		}
		else
		{
			char c = number[n-1];
			switch (c)
			{
				case '0' : 
				{
					ans[n] = '1';
					ans[0] = '1';
					ans[1] = '0';
					break;
				}
				case '1' :
				{
					ans[n] = '0';
					ans[0] = '1';
					ans[1] = '0';
					break;
				}
				case '2' : 
				{
					ans[n] = '0';
					ans[0] = '2';
					ans[1] = '0';
					break;
				}
				case '3' : 
				{
					ans[n] = '0';
					ans[0] = '3';
					ans[1] = '0';
					break;
				}
				case '4' : 
				{
					ans[n] = '0';
					ans[0] = '4';
					ans[1] = '0';
					break;
				}
				case '5' : 
				{
					ans[n] = '0';
					ans[0] = '5';
					ans[1] = '0';
					break;
				}
				case '6' : 
				{
					ans[n] = '0';
					ans[0] = '6';
					ans[1] = '0';
					break;
				}
				case '7' : 
				{
					ans[n] = '0';
					ans[0] = '7';
					ans[1] = '0';
					break;
				}
				case '8' : 
				{
					ans[n] = '0';
					ans[0] = '8';
					ans[1] = '0';
					break;
				}
				case '9' : 
				{
					ans[n] = '0';
					ans[0] = '9';
					ans[1] = '0';
					break;
				}
			}
			//cout << ans[0] << ans[1];
			ans[n-1] = '9' - number[n-2] + '0';
			int i = n-2; int j = 0;
			for(;i>j;)
			{
				if(number[j] == number[i])
				{
					ans[i+1] = ans[j+1] = '0';
				}
				else if(number[j] > number[i])
				{
					ans[i+1] = number[j] - number[i] + '0';
					ans[j+1] = '0';
					//cout << " ";
				}
				else
				{
					ans[j+1] = number[i] - number[j] + '0';
					ans[i+1] = '0';
				}
				i--;
				j++;
			}
			
			cout << ans << endl;
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