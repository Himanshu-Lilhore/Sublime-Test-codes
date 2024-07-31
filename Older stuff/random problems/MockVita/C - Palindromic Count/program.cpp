/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

//void init_code();  // for online judge 
//void fastio();     // for fast I/O

int main ()
{
	//init_code();
	//fastio();
	int n;
	string s;
	cin >> n;
	cin >> s;
	int m;
	cin >> m;
	int arr[m];
	for(int i = 0; i<m; i++)
	{
		cin >> arr[i];
	}
	int length, sum = 0;
	for(int i = 0; i<m; i++)
	{
		length = arr[i];
		if(length == 1)
		{
			sum += n;
			continue;
		}
		for(int j = 0; j<n-length+1; j++)
		{
			stack<int> stac;
			int k, pal = 1;
			for(k = j; k<j+ length/2; k++)
			{
				stac.push(s[k]);
			}
			if(length%2 == 1) k++;
			for(; k<j + length; k++)
			{
				if(stac.top() == s[k])
					stac.pop();
				else
				{
					pal = 0;
					break;
				}
			}
			if(pal == 1)
				sum++;
		}
	}
	cout << sum ;
	return 0;
}


// void init_code()
// {
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif // ONLINE_JUDGE
// }
// void fastio()
// {
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// }