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
		vector<char> pal;
		stack<char> reg;
		int n, op = 0, rem = n;
		cin >> n;
		string s;
		cin >> s;
		char here;
		bool palrun = true, regrun = true;
		if(n == 1)
		{
			cout << "n==1" << endl;        // (remove)
			cout << 0 << " " << 1 << endl;
		}
		else
		{
			cout << "n>1" << endl;        // (remove)
			for(int i = 0; i<n; i++)
			{
				cout << "H1" << endl;        // (remove)
				here = s[i];
				if(regrun == true)
				{
					cout << "regrun is true" << endl;        // (remove)
					if(reg.empty() == 1)
					{
						cout << "reg is empty" << endl;        // (remove)
						if(here == '(')
						{
							reg.push(here);
							cout << "pushed "<<here<< " in reg" << endl;        // (remove)
						}
						else
						{
							regrun = false;
							cout << "regrun set to false" << endl;        // (remove)
						}
					}
					else
					{
						cout << "reg is NOT empty" << endl;        // (remove)
						if(here == ')')
						{
							reg.pop();
							cout << "popped from reg" << endl;        // (remove)
							if(reg.empty() == 1)
							{
								cout << "reg is empty" << endl;        // (remove)
								op++;
								palrun = true;
								pal.clear();
								reg = stack<char> ();
								rem = n - i - 1;
								continue;
							}
						}
						else
						{
							reg.push(here);
							cout << "pushed "<<here<< " in reg" << endl; 
						}
					}
				}

				if(palrun == true)
				{
					cout << "palrun is true" << endl;      //(remove)
					int size = pal.size();
					if(size > n-i-2)
					{
						palrun = false;
						cout << "palrun set to flase" << endl;      //(remove)
					}
					else
					{
						bool itspal = false;
						cout << "initialized itspal to false" << endl;      //(remove)
						//odd
						if(size >= 2 && pal[size-2] == here)
						{
							itspal = true;
							cout << "odd part" << endl;      //(remove)
							for(int k = 1; k<=size-2; k++)
							{
								if(s[i+k] == pal[size-2-k])
								{
									cout << "itspal true : "<< s[i+k] <<" == " << pal[size-2-k] << endl;      //(remove)
									itspal = true;
								}
								else
								{
									cout << "itspal set to false : break" << endl;      //(remove)
									itspal = false;
									break;
								}
							}
							if(itspal == true)
							{
								cout << "itspal was true" << endl;      //(remove)
								op++;
								rem -= 2*size - 1;
								regrun = true;
								pal.clear();
								reg = stack<char> ();
								continue;
							}
						}
						//even
						else if(size >= 1 && pal[size-1] == here)
						{
							itspal = true;
							cout << "even part" << endl;      //(remove)
							for(int k = 1; k<=size-1; k++)
							{
								if(s[i+k] == pal[size-1-k])
								{
									cout << "itspal true : "<< s[i+k] <<" == " << pal[size-1-k] << endl;      //(remove)
									itspal = true;
								}
								else
								{
									cout << "itspal set to flase : break" << endl;      //(remove)
									itspal = false;
									break;
								}
							}
							if(itspal == true)
							{
								cout << "itspal was true" << endl;      //(remove)
								op++;
								rem -= 2*size;
								regrun = true;
								pal = vector<char> ();
								reg = stack<char> ();
								continue;
							}
						}
						//not a pallindrome yet
						else
						{
							pal.push_back(s[i]);
							cout << "not a pal : pushed in pal vector" << endl;      //(remove)
						}
					}
				}

				if(palrun == false && regrun == false)
				{
					cout << "outer break : palrun == false && regrun == false" << endl;      //(remove)
					break;
				}
			}
			cout << op << " " << rem << endl;
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