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
	int stocks,baskets,budget;  // k = stocks, n = #baskets, p = budget
	cin >> stocks >> baskets >> budget;
	vector<vector<int>> v;
	int g, p, f, input;
	vector<pair<int,int>> basketAna;  // for baskets : Price , Profitability
	for(int i = 0; i<baskets; i++)
	{
		basketAna.push_back({0,0});
	}
	for(int i = 0; i<stocks; i++)
	{
		cin >> g >> p >> f;
		v.push_back({g,p,f});
		/*v[i].push_back(g);  // basket number
		v[i].push_back(p);  // price
		v[i].push_back(f);  // profitability*/

		basketAna[g-1].second += f;
	}
	for(int i = 0; i<baskets; i++)
	{
		cin >> input;
		basketAna[i].first = input;
	}

	/*for(int i = 0; i<baskets; i++)
	{
		cout << basketAna[i].first << " "<< basketAna[i].second << endl;
	}*/

	vector<double> profitabilityRatio(stocks+baskets);
	for(int i = 0; i<stocks; i++)
	{
		profitabilityRatio[i] = (1.0*v[i][2]) / v[i][1];  // profitability per unit currency
	}
	for(int i = stocks; i<stocks+baskets; i++)
	{
		profitabilityRatio[i] = (1.0*basketAna[i-stocks][1]) / basketAna[i-stocks][0];
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