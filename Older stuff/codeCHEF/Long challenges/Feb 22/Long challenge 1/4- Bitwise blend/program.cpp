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
	fastio();
	int testCases;
	cin >> testCases;
	//cout << "testcases taken" << endl;    // remove
	while(testCases--)
	{
		long long int n;
		cin >> n;
		int brr[n];
		long long int temp;
		int count1 = 0, count0 = 0, evenplace1 = 0, oddplace1 = 0, last0 = 0, last1 = 0;
		vector<pair<int, int>> v;
		//cout << "h1" << endl;     // remove
		for(int i=0; i<n; i++)
		{
			cin >> temp;
			temp = temp&1;
			brr[i] = temp;
			//cout << temp << " ";     // remove
			if(temp == 1)
				{
					count1++;
					last1 = i;
					if(i%2 == 0)
						evenplace1++;
					else
						oddplace1++;
				}
			else
				{
					count0++;
					last0 = i;
				}
		}
		//cout << endl;              // remove
		if(count0 == n || count1 == n)
			{
				cout << -1 << endl;
				continue;
			}
		if(evenplace1 > oddplace1)
		{
			//cout << "evenplace1" << endl;    // remove
			for(int i = 0; i<n; i++)
			{
				if(i%2 == 0)
				{
					//cout << "at even place "<< endl;     // remove
					if(brr[i] == 1)
						{
							//cout << "brr[i] found as 1" << endl;    // remove
							last1 = i;
							//cout << "nothing done" << endl;    // remove
							continue;
						}
					else
					{
						//cout << "brr[i] found as 0" << endl;     // remove
						brr[i] = 1;
						//cout << "brr[i] changed to 1 : " << brr[i] << endl;    // remove
						v.push_back({i+1,last1+1});
						last1 = i;
					}
				}
				else
				{
					///cout << "at odd place " << endl;     // remove
					if(brr[i] == 1)
					{
						//cout << "brr[i] changed to 0 : " << brr[i] << endl;    // remove
						brr[i] = 0;
						v.push_back({i+1,last0+1});
						last0 = i;
					}
					else
					{
						//cout << "nothing done " << endl;     // remove
						last0 = i;
						continue;
					}
				}
			}
		}
		else
		{
			//cout << "oddplace1" << endl;    // remove
			for(int i = 0; i<n; i++)
			{
				if(i%2 == 1)
				{
					//cout << "at odd place" << endl;     // remove
					if(brr[i] == 1)
						{
							last1 = i;
							continue;
						}
					else
					{
						brr[i] = 1;
						v.push_back({i+1,last1+1});
						last1 = i;
					}
				}
				else
				{
					//cout << "at even place" << endl;     // remove
					if(brr[i] == 1)
					{
						brr[i] = 0;
						v.push_back({i+1,last0+1});
						last0 = i;
					}
					else
					{
						last0 = i;
						continue;
					}
				}
			}
		}


		//remove
		// for(int i = 0; i<n; i++)
		// {
		// 	cout << brr[i] << " ";
		// }
		// cout << endl;
		// //remove


		int vv = v.size();
		cout << vv << endl;
		for(int i = 0 ; i<vv; i++)
		{
			cout << v[i].first << " " << v[i].second << endl;
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