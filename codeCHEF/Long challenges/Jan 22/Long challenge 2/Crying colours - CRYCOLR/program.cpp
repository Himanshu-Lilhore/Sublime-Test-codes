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

void assignment(int *[][4] arr, int mx, int my)
{
	int a,b,c;
	arr[mx][0] = my-1;
	mx = (mx + 1)%3;
	for(int i=0; i<3; i++)
	{
		if(arr[i][0] != -1)
		{
			if(my)
		}
	}
}


int main ()
{
	init_code();
	
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int balls;
		cin >> balls;
		int arr[3][4] = {{-1,0,0,0},{-1,0,0,0},{-1,0,0,0}};
		// r1, g2, b3 on 0th index, -1 if not assigned
		int input;
		int mx, my, max = INT_MIN;
		for(int i=0; i<3; i++)
		{
			for(int j=1; j<=3; j++)
			{
				cin >> input;
				if(input > max)
				{
					max = input;
					mx = i;
					my = j;
				}
				arr[i][j] = input;
			}
		}


	}
	return 0;
}