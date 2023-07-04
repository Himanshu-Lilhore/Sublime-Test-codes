/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

int main ()
{
	init_code();
	
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int n;
		cin >> n;
		set<int> s;
		auto it = s.begin();
		int max = 0;
		string query;
		cin >> query;
		int theint = 0;
		int loop = 0;
		for(int h=0; loop < n; h++)
		{
			char c = query[h];
			cout << "first char (h="<< h << "): " << c << endl;  //(remove)
			if(c == 0)
			{
				cout << "break" << endl;  //(remove)
				break;
			}
			if(c == ' ')
			{
				cout << "khaali space" << endl;  //(remove)
				if(theint > max)
				{
					max = theint;
					cout << "max changed to : " << max << endl;  //(remove)
				}
				s.insert(theint);
				cout << "inserted into set : " << theint << endl;  //(remove)
				loop++;
				theint = 0;
				continue;
			}
			theint = theint*10 + ((int)c - 48);
			cout << "theint (in else) : " << theint << endl;  //(remove)
		}

		s.insert(theint);


		int sum = 0;
		for( it = s.begin(); it!=s.end(); ++it)
		{
			sum = sum + (max - *it);
			cout << "sum = " << sum << endl;
 		}
 		cout << "OP bhai : " << sum << endl;
	}
	return 0;
}