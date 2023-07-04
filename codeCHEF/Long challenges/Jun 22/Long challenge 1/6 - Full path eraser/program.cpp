/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O

struct Node
{
	long long int data;
	vector<Node *> children;
};

int main ()
{
	init_code();
	//fastio();
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		// basic inputs
		int nodes, input1, input2;
		cin >> nodes;
		int values[nodes];
		for(int i = 0; i<nodes; i++)
		{
			cin >> input1;
			values[i] = input1;
		}

		// tree inputs
		for(int i = 0; i<nodes; i++)
		{
			cin >> input1 >> input2;
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