/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

/*void init_code();  // for online judge 
void fastio();     // for fast I/O
*/
int main ()
{
	//init_code();
	string sequence;
	getline(cin,sequence);
	string input;
	getline(cin, input);
	int isize = input.size();
	transform(sequence.begin(), sequence.end(), sequence.begin(), ::tolower);
	transform(input.begin(), input.end(), input.begin(), ::tolower);

	vector<vector<char>> words;
	char thisChar;
	int noOfSpaces = 0;
	for(int i = 0; i<isize; i++)
	{
		thisChar = input[i];
		if(thisChar != ' ')
		{
			if((int)(words.size()) == noOfSpaces)
				words.push_back({});
			words[noOfSpaces].push_back(thisChar);
		}
		else
		{
			noOfSpaces++;
		}
	}


	int ssize = sequence.size();
	set<char> repeatCheck;
	auto it = repeatCheck.begin();
	for(int i = 0; i<ssize; i++)
	{
		thisChar = sequence[i];
		it = repeatCheck.find(thisChar);
		if(it == repeatCheck.end())
		{
			repeatCheck.insert(thisChar);
		}
		else
		{
			cout << "New Language Error" ;
			return 0;
		}
	}

	vector<unordered_map<char,int>> inputOrdered (words.size());
	for(int j = 0; j<(int)(words.size()); j++)
	{
		for(int i = 0; i<(int)(words[j].size()); i++)
		{
			thisChar = words[j][i];
			it = repeatCheck.find(thisChar);
			if(it != repeatCheck.end())
			{
				if(inputOrdered[j].find(thisChar) == inputOrdered[j].end())
				{
					inputOrdered[j].insert({thisChar,1});
				}
				else
				{
					inputOrdered[j][thisChar]++;
				}
			}
		}
	}


	int noOfTime = 0;
	int charCount = 0;
	for(int j = 0; j<(int)(words.size()); j++)
	{
		charCount = 0;
		for(int i = 0; i<(int)(sequence.size()); i++)
		{
			thisChar = sequence[i];
			noOfTime = inputOrdered[j][thisChar];
			for(int j = 0; j<noOfTime; j++)
			{
				cout << thisChar;
				charCount++;
			}
		}
		//if(j == (int)(words.size()) -1) break;
		if(charCount != 0)
			cout << " ";
	}
	return 0;
}


/*void init_code()
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
}*/