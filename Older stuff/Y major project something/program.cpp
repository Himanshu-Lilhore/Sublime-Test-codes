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
	ifstream file1("input.txt", ios::in);
	ofstream file2("output.txt", ios::out);
	
	int count = 0, size;
	string s1;
	vector<string> v;
	if(file1.is_open())
	{
		//cout << "h1" << endl;      // (remove)
		while(getline(file1, s1))
		{
			//cout << "h2" << endl;      // (remove)
			if( (s1[0] >= 'B' && s1[0] <= 'Z') || s1[0] == '\n' || s1[0] == '\0')
				continue;
			if(s1[0] == 'A')
				s1[0] = s1[8];
			count++;
			size = s1.size();

			if(count%6 == 1)
			{
				//cout << "h3" << endl;      // (remove)
				cout << "quizModelArrayList.add(new QuizModel(\"";
			}
			if(count%6 == 2)
			{
				//cout << "h4" << endl;      // (remove)
				v.push_back("");
				cout << "\", \"";
			}
			if(count%6 == 3)
			{
				//cout << "h5" << endl;      // (remove)
				v.push_back("");
				cout << "\", \"";
			}
			if(count%6 == 4)
			{
				//cout << "h6" << endl;      // (remove)
				v.push_back("");
				cout << "\", \"";
			}
			if(count%6 == 5)
			{
				//cout << "h7" << endl;      // (remove)
				v.push_back("");
				cout << "\", \"";
			}
			if(count%6 == 0)
			{
				//cout << "h8" << endl;      // (remove)
				cout << "\", \"";
			}

			if(count%6 != 0)
			{
				//cout << "h9" << endl;      // (remove)
				for(int i = 0; i<size; i++)
				{
					if(i == 0)
					{
						//cout << "h10" << endl;      // (remove)
						if(s1[i] >= '0' && s1[i] <= '9')
						{
							if((s1[i+1] == '.' && s1[i+2] == ' '))
							{
								i += 3;
								//cout << "h11" << endl;      // (remove)
							}
							if(s1[i+2] == '.' && s1[i+3] == ' ')
							{
								i += 4;
							}
						}
						if( (s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z') )
						{
							if(s1[i+1] == ')' && s1[i+2] == ' ')
							{
								i += 3;
								//cout << "h12" << endl;      // (remove)
							}
						}
					}
					cout << s1[i];
					if(count%6 != 1)
					{
						//cout << "h13" << endl;      // (remove)
						v[count%6 - 2].push_back(s1[i]);
					}
				}
				if(count%6 != 1)
					{
						//cout << "h14" << endl;      // (remove)
						v[count%6 - 2].push_back('\0');
					}
			}
			else
			{
				//cout << "h15" << endl;      // (remove)
				if(s1[0] == 'a')
				{
					size = v[0].size();
					for(int k = 0; k<size-1; k++)
					{
						cout << v[0][k];
					}
				}
				else if(s1[0] == 'b')
				{
					size = v[1].size();
					for(int k = 0; k<size-1; k++)
					{
						cout << v[1][k];
					}
				}
				else if(s1[0] == 'c')
				{
					size = v[2].size();
					for(int k = 0; k<size-1; k++)
					{
						cout << v[2][k];
					}
				}
				else if(s1[0] == 'd')
				{
					size = v[3].size();
					for(int k = 0; k<size-1; k++)
					{
						cout << v[3][k];
					}
				}
				cout << "\"));" << endl;
				v.clear();
			}
			//cout << "h16" << endl;      // (remove)
		}
		file1.close();
		file2.close();
	}
	else
	{
		cout << "Unable to open file(s)";
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