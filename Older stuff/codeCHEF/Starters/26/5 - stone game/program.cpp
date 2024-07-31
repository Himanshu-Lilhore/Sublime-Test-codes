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
		int n ;
		cin >> n;
		int alice[26], bob[26];
		memset(alice, 0, sizeof(alice));
		memset(bob, 0, sizeof(bob));
		string a, b;
		cin >> a;
		cin >> b;
		for(int i = 0; i<n; i++)
		{
			alice[a[i]-'a']++;
			bob[b[i]-'a']++;
		}
		int alicestart=0, aliceend=25, bobstart=0, bobend=25;
		string output[2*n];
		int firstempty = 0, lastempty = 2*n -1;
		for(int i = 0; i<n; i++)
		{

			// alice updation		
			for(;alicestart<=aliceend;)
			{
				if(alice[alicestart] == 0) alicestart++;
				else break;
			}
			for(;aliceend>=alicestart;)
			{
				if(alice[aliceend] == 0) aliceend--;
				else break;
			}
			// alice updation complete

			// bob updation
			for(;bobstart<=bobend;)
			{
				if(bob[bobstart] == 0) bobstart++;
				else break;
			}
			for(;bobend>=bobstart;)
			{
				if(bob[bobend] == 0) bobend--;
				else break;
			}
			// bob updation complete

			// alice's turn
			if(alicestart <= bobend)
			{
				output[firstempty++] = (char)(alicestart+'a');
				alice[alicestart]--;
			}
			else
			{
				output[lastempty--] = (char)(aliceend+'a');
				alice[aliceend]--;
			}
			
			// alice updation		
			for(;alicestart<=aliceend;)
			{
				if(alice[alicestart] == 0) alicestart++;
				else break;
			}
			for(;aliceend>=alicestart;)
			{
				if(alice[aliceend] == 0) aliceend--;
				else break;
			}
			// alice updation complete

			// bob's turn
			if(bobend >= alicestart)
			{
				output[firstempty++] = (char)(bobend+'a');
				bob[bobend]--;
			}
			else
			{
				output[lastempty--] = (char)(bobstart+'a');
				bob[bobstart]--;
			}
		}
		for(int i = 0; i<2*n; i++)
			cout << output[i];
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