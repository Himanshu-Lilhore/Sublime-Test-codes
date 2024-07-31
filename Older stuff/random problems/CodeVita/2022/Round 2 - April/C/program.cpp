/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O

char find(long long int line, long long int linePos, char c)
{
	if(line == 1) return c;
	char left, right;
	switch(c)
	{
		case 'a':
		left = 'a';
		right = 'b';
		break;

		case 'b':
		left = 'c';
		right = 'd';
		break;

		case 'c':
		left = 'c';
		right = 'd';
		break;

		case 'd':
		left = 'a';
		right = 'b';
		break;
	}
	long long int temp = pow(2,line-2);
	if(linePos <= temp)
		return find(line-1, linePos, left);
	else
		return find(line-1, linePos-temp, right);
}

int main ()
{
	init_code();
	//fastio();
	
	long long int n;
	cin >> n;

	long long int line = floor(log2(n)) + 1;
	long long int linePos = n - pow(2,line-1) + 1;

	cout << find(line, linePos, 'a');

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