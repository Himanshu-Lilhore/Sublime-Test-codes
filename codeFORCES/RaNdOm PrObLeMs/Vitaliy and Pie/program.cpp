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

const int thirty = 30;
int arr[thirty];

int main ()
{
	init_code();
	
	int n;
	string s;
	cin >> n;
	cin >> s;
	memset(arr, 0, sizeof(arr));
	int size = (2*n) -2;
	int count = 0;
	for(int i = 0; i<size && s[i] != '\0'; i++)
	{
		if(i%2 == 0)
		{
			
			arr[s[i]-'a']--;
		}
		else
			{
				if(arr[s[i]-'A'] == 0)
					count++;
				else
					arr[s[i]-'A']++;
			}
	}
	
	for(int i = 0 ; i<26 ; i++)
	{
		if(arr[i]>0)
			count+= arr[i];
	}
	cout << count;
	return 0;
}