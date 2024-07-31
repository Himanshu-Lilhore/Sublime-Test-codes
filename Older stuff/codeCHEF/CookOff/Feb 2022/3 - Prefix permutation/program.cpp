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
		long long int k , n, input, lastinput = 0;
		cin >> k >> n;
		vector<long long int> arr;
		vector<long long int> brr;
		cin >> input;
		arr.push_back(input);
		for(long long int i = 1; i<input; i++)
		{
			brr.push_back(i);
		}
		lastinput = input;
		for(long long int i = 1; i<n ; i++)
		{
			cin >> input;
			arr.push_back(input);
			for(long long int j = lastinput+1;; j++)
			{
				if(j>=input)
					break;
				brr.push_back(j);
			}
			lastinput = input;
		}
		// for(int j = lastinput+1;; j++)
		// {
		// 	if(j>=input)
		// 		break;
		// 	brr.push_back(j);
		// }

		int lastpos = 0, thisval;
		for(long long int i = 0; i<n ; i++)
		{
			thisval = arr[i];
			brr.insert(brr.begin()+lastpos, thisval);
			lastpos = thisval;
		}

		for(long long int i = 0; i<brr.size(); i++)
		{
			cout << brr[i] << " ";
		}
		cout << endl;
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