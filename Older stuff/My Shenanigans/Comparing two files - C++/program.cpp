/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

int main ()
{
	string s1, s2;
	int size1, size2;
	ifstream file1("input 1.txt", ios::in);
	ifstream file2("input 2.txt", ios::in);
	ofstream file3("output.txt", ios::out);
	int line = 1;
	bool err = false;
	if(file1.is_open() && file2.is_open())
	{
		while(getline(file1, s1) && getline(file2, s2))
		{
			size1 = s1.size();
			size2 = s2.size();
			if(size1 != size2)
			{
				file3 << "Varying no. of characters." << endl;
				err = true;
			}
			for(int i = 0; i<size1 && i<size2; i++)
			{
				if(s1[i] != s2[i])
				{
					file3 << "Inputs mismatch at :" << endl
					<< "Line = " << line << ", "
					<< "Index = " << i << endl;
					for(int k = 0; k<i; k++)
					{
						file3 << " ";
					}
					file3 << "↓" << endl;
					file3 << s1 << endl;
					file3 << s2 << endl;
					for(int k = 0; k<i; k++)
					{
						file3 << " ";
					}
					file3 << "↑" << endl;
					//file3 << s2[i] << " instead of " << s1[i];
					err = true;
					break;
				}
			}
			line++;
		}
		if(err == false)
		{
			file3 << "Exact same inputs.";
		}
		file1.close();
		file2.close();
		file3.close();
	}
	else
	{
		cout << "Unable to open file(s)";
	}
	return 0;
}

