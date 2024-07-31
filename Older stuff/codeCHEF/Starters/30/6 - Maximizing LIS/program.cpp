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
		long long int n, input, last, start;  // last element vale // start element index
		cin >> n;
		vector<long long int> v(n);
		vector<pair<long long int, long long int>> incSubArr;  // pair of start and end index of strictly increasing subarrays
		for(int i = 0; i<n ; i++)
		{
			cin >> input;
			v[i] = input;
			if(i == 0)
			{
				start = i;
				last = input;
				continue;
			}
			if(input <= last)
			{
				incSubArr.push_back({start, i-1});
				//cout << "{" << start << ", " << i-1 << "}" << endl;    //(remove)
				start = i;
			}
			if(i == n-1)
			{
				incSubArr.push_back({start, i});
				//cout << "{" << start << ", " << i << "}" << endl;    //(remove)
			}
			last = input;
		}
		long long int maxLen = 0, curLen = 0, size = incSubArr.size(), nextLen = 0, nextNextLen = 0;
		if(n == 1) maxLen = 1;
		for(int i = 0; i<size; i++)
		{
			curLen = incSubArr[i].second - incSubArr[i].first + 1;
			/*if(i<size-2)
			{
				nextNextLen = incSubArr[i+2].second - incSubArr[i+2].first + 1;
				nextLen = incSubArr[i+1].second - incSubArr[i+1].first + 1;
				if( v[incSubArr[i].second]+nextLen < v[incSubArr[i+2].first] )
				{
					if( v[incSubArr[i+2].first] - v[incSubArr[i].second] -1 >= v[incSubArr[i+1].second] - v[incSubArr[i+1].first] +1)
					{
						if(maxLen < curLen + nextLen + nextNextLen)
						{
							maxLen = curLen + nextLen + nextNextLen;
						}
						continue;
					}
				}
			}*/
			if(i<size-1)
			{
				nextLen = incSubArr[i+1].second - incSubArr[i+1].first + 1;
				if(curLen + nextLen > maxLen)
				{
					maxLen = curLen + nextLen;
				}
			}
			if(curLen > maxLen)
				{
					maxLen = curLen;
				}
		}
		cout << maxLen << endl;

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