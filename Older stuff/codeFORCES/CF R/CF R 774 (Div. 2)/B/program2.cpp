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
		long long int n, input, sum = 0;
		cin >> n;
		multimap<int, double, greater<int>> m;
		vector<int> v;
		for(int i = 0; i<n; i++)
		{
			cin >> input;
			v.push_back(input);
			sum += input;
		}
		for(int i = 0; i<n; i++)
		{
			m.insert({v[i], (v[i]*100.0) / sum});
		}
 
		//for(auto yt = m.begin(); yt != m.end(); yt++) cout << (*yt).first << " "  << (*yt).second << endl;
		
		double per = 0;
		int kl;
		if(n%2 == 0) kl = 1;
		else kl = 0;
		auto it = m.begin();
		auto itr = m.end();
		itr--;
		int ans = 0;
		double perRed = (*itr).second;
		int count = 0, countRed = 1;
		for(int i = 0; i<n; i++)
		{
			per += (*it).second;
			itr--; countRed++;
			perRed += (*itr).second;
			count++;
			
			if(perRed < per && count+countRed <= n && count < countRed)
			{
				ans = 1;
				break;
			}
			if(count+countRed > n)
			{
				ans = 0; 
				break;
			}
			//cout << per << endl;
			if(per > 50) 
			{
				ans = 1;
				break;
			}
			it++;
		}
		if(ans == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
		/*if(per > 50)
		{
			if(count < n/2-kl)
				cout << "YES" << endl;
			else if(n+1 - count)
		}
		else cout << "NO" << endl;*/
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