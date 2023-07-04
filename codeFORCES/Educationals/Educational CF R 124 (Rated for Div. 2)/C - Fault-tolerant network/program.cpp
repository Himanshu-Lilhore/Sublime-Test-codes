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
		vector<pair<int, int>> v(n);
		int input;
		for(int i = 0; i<n; i++)
		{
			cin >> input;
			v[i].first = input;
		}
		for(int i = 0; i<n; i++)
		{
			cin >> input;
			v[i].second = input;
		}
		int leftbot = v[0].first-v[n-1].second,
		 rightbot = abs(v[n-1].first-v[0].second),
		  lefttop = abs(v[0].second-v[n-1].first),
		    righttop = abs(v[n-1].second-v[0].first);
		int leftbot2 = v[0].first-v[n-1].second,
		 rightbot2 = abs(v[n-1].first-v[0].second),
		  lefttop2 = abs(v[0].second-v[n-1].first),
		    righttop2 = abs(v[n-1].second-v[0].first);
		int leftbotindex = n-1, rightbotindex = 0, lefttopindex = n-1, righttopindex = 0;
		for(int i = 0, j = n-1; i<n; i++,j--)
		{
			if(abs(v[0].first-v[j].second) < leftbot)
				{
					leftbot2 = leftbot;
					leftbot = abs(v[0].first-v[j].second);
					leftbotindex = j;
				}

			if(abs(v[n-1].first-v[i].second) < rightbot)
				{
					rightbot2 = rightbot;
					rightbot = abs(v[n-1].first-v[i].second);
					rightbotindex = i;
				}

			if(abs(v[0].second-v[j].first) < lefttop)
				{
					lefttop2 = lefttop;
					lefttop = abs(v[0].second-v[j].first);
					lefttopindex = j;
				}

			if(abs(v[n-1].second-v[i].first) < righttop)
				{
					righttop2 = righttop;
					righttop = abs(v[n-1].second-v[i].first);
					righttopindex = i;
				}
		}
		if((lefttopindex == n-1 && rightbotindex == 0) || (lefttopindex == 0 && leftbotindex == 0))
		{
			lefttop = 0;
		}
		if((righttopindex == 0 && leftbotindex == n-1) || (righttopindex == n-1 && rightbotindex == n-1))
		{
			righttop = 0;
		}
		long long int sum = leftbot*1.0+lefttop*1.0+rightbot*1.0+righttop*1.0;
		cout << sum << endl;
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