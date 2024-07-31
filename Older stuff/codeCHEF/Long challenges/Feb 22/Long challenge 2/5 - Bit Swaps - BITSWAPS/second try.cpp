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
	while(testCases--)
	{
		int n;
		cin >> n;
		int ans = 1;
		long long int input;
		vector<pair<long long int,set<long long int>>> v;
		long long int original[n], sorted[n];
		for(int j = 0; j<n; j++)
		{
			cin >> input;
			original[j] = sorted[j] = input;
			// cout << "input taken" << endl;                // (remove)
			if(v.size() == 0)
			{
				v.push_back({input, {input}});
				// cout << "pushed first value into v : " << v[0].first << ":" << *(v[0].second.begin()) << endl;  // (remove) 
				// cout << "continued" << endl;                 // (remove)
				continue;
			}
			long long int aand;
			int inputaccepted = 0, firstacceptedatindex;
			// cout << "looping started" << endl;                 // (remove)
			for(int i=0; i<v.size(); i++)
			{
				aand = v[i].first & input;
				// cout << "aand = " << aand << endl;                // (remove)
				if(aand != 0)
				{
					if(inputaccepted == 0)
					{
						// cout << "inputaccepted = 0" << endl;                 // (remove)
						v[i].first |= aand;
						v[i].second.insert(input);
						inputaccepted++;
						firstacceptedatindex = i;
					}
					else
					{
						// cout << "inputaccepted != 0" << endl;                // (remove)
						v[firstacceptedatindex].second.insert(v[i].second.begin(), v[i].second.end());
						v[firstacceptedatindex].first |= v[i].first;
						v.erase(v.begin()+i);
						inputaccepted++;
						i--;
					}
				}

				// // (remove from here)
				// cout << "printing v" << endl;
				// for(int ii = 0; ii<v.size(); ii++)
				// {
				// 	cout << v[ii].first << " : ";
				// 	for(auto it = v[ii].second.begin(); it != v[ii].second.end(); it++)
				// 	{
				// 		cout << *it << " ";
				// 	}
				// 	cout << endl;
				// }
				// // (till here)
			}
			if(inputaccepted == 0)
			{
				v.push_back({input, {input}});
				// cout << "inserted a new pair in v bcz it didn't match with any set before" << endl;    // (remove)
				continue;
			}
		}


		// // (remove this code)
		// for(int i = 0; i<v.size(); i++)
		// {
		// 	cout << v[i].first << " : ";
		// 	for(auto it = v[i].second.begin(); it != v[i].second.end(); it++)
		// 	{
		// 		cout << *it << " ";
		// 	}
		// 	cout << endl;
		// }
		// // (remove till here)


		if(v.size() == 1)
			ans = 1;
		else
		{
			sort(sorted, sorted+n);
			long long int ori, exchange;
			int oripool=-1, expool=-1;
			for(int i = 0; i<n; i++)
			{
				a:
				if(i>=n) break;
				ori = original[i];
				for(int j = 0; j<n; j++)
				{
					if(sorted[j] == ori)
					{
						if(i == j)
							{
								i++;
								goto a;
							}
						else
						{
							exchange = sorted[i];
							for(int y = 0; y<v.size(); y++)
							{
								if(v[y].second.count(exchange) == 1 && v[y].second.count(ori) == 1)
									{
										i++;
										goto a;
									}
							}
							ans = 0;
							break;
						}
					}
				}
				if(ans == 0) break;
			}
		}
		if(ans == 1) cout << "Yes" << endl;
		else cout << "No" << endl;
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