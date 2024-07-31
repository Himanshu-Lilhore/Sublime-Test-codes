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
	string sequence;
	getline(cin,sequence);
	string input;
	//fflush(stdin);
	getline(cin, input);
	int ssize = sequence.size();
	//cout << "sequence size : " << ssize << endl;     // (remove)
	int isize = input.size();
	transform(sequence.begin(), sequence.end(), sequence.begin(), ::tolower);
	//transform(input.begin(), input.end(), input.begin(), ::tolower);
	vector<vector<char>> words;
	int noOfSpaces = 0;
	for(int i = 0; i<isize; i++)
	{
		thisChar = input[i];
		if(thisChar != ' ')
		{
			if(words.size() == noOfSpaces)
				words.push_back({});
			if(thisChar>='A' && thisChar<='Z')
				thisChar = thisChar - 'A' + 'a';
			words[noOfSpaces].push_back(thisChar);
		}
		else
		{
			noOfSpaces++;
		}
	}
	//cout << "input size : " << isize << endl;     // (remove)
	set<char> repeatCheck;
	char thisChar;
	auto it = repeatCheck.begin();
	int totalInserts = 0;
	char newSequence[ssize];
	for(int i = 0; i<ssize; i++)
	{
		//cout << "H1" << endl;              // (remove)
		thisChar = sequence[i];
		it = repeatCheck.find(thisChar);
		if(it == repeatCheck.end())
		{
			//cout << "H2 : not found, inserting " << thisChar << endl;              // (remove)
			repeatCheck.insert(thisChar);
			//newSequence[totalInserts] = thisChar;
			totalInserts++;
		}
		else
		{
			//cout << "New Language Error" ;
			return 0;
		}
	}
	vector<int> space;  // after how many characters there is a space
	int inbetweenSpace = 0;
	unordered_map<char,int> inputOrdered;
	for(int i = 0; i<isize; i++)
	{
		cout << "H3" << endl;              // (remove)
		thisChar = input[i];
		if(thisChar == ' ')
			{
				cout << "H4 : inbetweeSpace = " << inbetweenSpace << endl;              // (remove)
				space.push_back(inbetweenSpace);
				inbetweenSpace = 0;
				continue;
			}
		else
		{
			cout << "H5" << endl;              // (remove)
			inbetweenSpace++;
			it = repeatCheck.find(thisChar);
			if(it != repeatCheck.end())
			{
				if(inputOrdered.find(thisChar) == inputOrdered.end())
				{
					cout << "H6 : new insert InMap, " << thisChar << endl;              // (remove)
					inputOrdered.insert({thisChar,1});
				}
				else
				{
					cout << "HH6 : old insert update, " << thisChar << endl;              // (remove)
					inputOrdered[thisChar]++;
				}
			}
			else
			{
				inbetweenSpace--;
			}
		}
	}
	ssize = totalInserts;
	int charCount = 0, spaceCount = 0;
	int noOfTime;
	for(int i = 0; i<ssize; i++)
	{
		thisChar = newSequence[i];
		//cout << "H7 : " << thisChar << " : " ;              // (remove)
		if(space[spaceCount] == charCount)
		{
			//cout << "H8 : printing space" << endl;              // (remove)
			cout << " ";
			charCount = 0;
			spaceCount++;
		}
		noOfTime = inputOrdered[thisChar];
		//cout << noOfTime << endl;             // (remove)
		for(int j = 0; j<noOfTime; j++)
		{
			//cout << "H9 : printing char" << endl;              // (remove)
			cout << thisChar;
			charCount++;
			if(space[spaceCount] == charCount)
			{
				//cout << "H10 : printing space" << endl;              // (remove)
				cout << " ";
				charCount = 0;
				spaceCount++;
			}
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