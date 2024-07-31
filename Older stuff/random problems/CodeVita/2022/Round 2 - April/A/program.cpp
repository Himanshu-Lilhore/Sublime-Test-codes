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
	int rows; 
	cin >> rows;
	int arr[rows];
	string seats;
	vector<string> vv;
	int size, count = 0;
	for(int i=0; i<rows; i++)
	{
		cin >> seats;
		vv.push_back(seats);
		size = seats.size();
		count = 0;
		for(int j = 0; j<size; j++)
		{
			if(seats[j] == '_') count++;
		}
		arr[i] = count;
	}
	string g;
	cin >> g;
	vector<int> groups;
	string sub;
	int last = 0, i;
	for(i = 0; g[i] != '\0'; i++)
	{
		if(g[i] == ',')
		{
			sub = g.substr(last, i-last);
			last = i+1;
			groups.push_back(stoi(sub));
		}
	}
	sub = g.substr(last, i-last);
	groups.push_back(stoi(sub));
	
	vector<int> priority;
	size = groups.size();
	for(i = size/2; i<size; i++)
	{
		priority.push_back(groups[i]);
	}
	for(i = size/2 -1; i>=0; i--)
	{
		priority.push_back(groups[i]);
	}

	vector<int> ans[rows];
	size = priority.size();
	for(i = 0; i<size; i++)
	{
		for(int j = 0; j<rows; j++)
		{
			if(arr[j] >= priority[i])
			{
				ans[j].push_back(i+1);
				arr[j] -= priority[i];
				break;
			}
		}
	}


	size = vv[0].size();
	int group, noOfGroups, groupSeq = 0;
	bool prUnder = false;

	vector<vector<char>> ww;
	for(i = 0; i<rows; i++)
	{
		noOfGroups = ans[i].size();
		group = ans[i][groupSeq++];
		count = priority[group-1];
		ww.push_back({});
		for(int j = 0; j<size; j++)
		{
			if(vv[i][j] == 'X')
			{
				//cout << "X";
				ww[i].push_back('X');
				continue;
			}
			if(count == 0)
			{
				if(groupSeq >= noOfGroups)
				{
					prUnder = true;
				}
				else
				{
					group = ans[i][groupSeq++];
					count = priority[group-1];
					//cout << group;
					ww[i].push_back(group);
					count--;
				}
				if(prUnder == true)
				{
					//cout << "_";
					ww[i].push_back('_');
					continue;
				}
			}
			else
			{
				//cout << group;
				ww[i].push_back(group);
				count--;
			}
		}
		//cout << endl;
		//ww[i].push_back('\0');
		groupSeq = 0;
		prUnder = false;
	}

	string tr = {};
	for(i = 0; i<rows; i++)
	{
		for(int j = 0; j<ww[i].size(); j++)
		{
			tr.push_back(ww[i][j]);
		}
		tr.push_back('\0');
		cout << tr << endl;
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