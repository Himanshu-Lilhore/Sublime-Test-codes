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
		vector<int> m (n);
		for(int i = 0; i<n; i++)
		{
			cin >> input;
			m[i] = input;
			sum += input;
		}
		
		sort(m.begin(), m.end(), greater<int>());
		
		auto it = m.begin();  // blue iterator
		auto itr = m.end();  // red iterator
		long long int sumB = 0, sumR = 0;
		itr--;
		sumR = *itr;
		int ans = 0;
		//double perRed = (*itr).second;
		int count = 0, countRed = 1;
		for(int i = 0; i<n; i++)
		{
			sumB += (*it);
			itr--; countRed++;
			sumR += (*itr);
			count++;
			
			if(sumR < sumB && count+countRed <= n && count < countRed)
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
			/*if(per > 50) 
				{
					ans = 1;
					break;
				}*/
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