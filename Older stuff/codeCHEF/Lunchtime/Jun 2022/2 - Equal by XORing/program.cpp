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
		int ans = 1;
		string a,b,n;
		cin >> a >> b >> n;
		if(a == b)
		{
			cout << 0 << endl;
			continue;
		}
		int asize = a.size();
		int bsize = b.size();
		int maxsize = max(a.size(), b.size());
		int minsize = min(a.size(), b.size());
		int arr[maxsize];
		memset(arr,0,sizeof(arr));
		for(int i = 0; i<minsize; i++)
		{
			arr[maxsize-i-1] = (a[asize-i-1]-'0')^(b[bsize-i-1]-'0');
		}
		for(int i = minsize; i<maxsize; i++)
		{
			if(bsize == maxsize)
				arr[maxsize-i-1] = b[bsize-i-1]-'0';
			else
				arr[maxsize-i-1] = a[asize-i-1]-'0';
		}
		int narr[31];
		int marr[31];
		memset(narr,0,sizeof(narr));
		memset(marr,0,sizeof(marr));
		for(int i = 0; i<n.size(); i++)
		{
			narr[31-i-1] = n[n.size()-i-1]-'0';
		}
		for(int i = 0; i<maxsize; i++)
		{
			marr[31-i-1] = arr[maxsize-i-1];
		}

		for(int i = 0; i<31; i++)
		{
			int x = narr[i] - marr[i];
			if(x == 1)
			{
				ans = 1;
				break;
			}
			else if(x == 0)
			{
				continue;
			}
			else if(x == -1)
			{
				ans = -1;
				break;
			}
		}
		cout << ans << endl;
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