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

int change(int n, int ans)
{
	int count = 0;
	int nn = n, anss = ans;
	if((n > 99 && ans > 99) || (n <= 99 && ans <= 99))
	{
		for(;anss!=0;)
		{
			if(anss%10 != nn%10)
			{
				count++;
			}
			anss/=10;
			nn/=10;
		}
	}
	else
	{
		int bada = fmax(anss, nn);
		int chota = fmin(anss, nn);
		count++;
		if(bada%10 != chota%10)
				count++;
		bada/=10;
		chota/=10;
		if(bada%10 != chota%10)
				count++;
	}
	//cout << "change : count = " << count << endl;   //remove
	return count;
}

int align(int a1, int a2)
{
	int a;
	if(a1<7) 
		a = 7;
	else if(a2>994) 
		a = -7;
	else 
		a = 0;
	//cout << "align : returned = " << a << endl;   //remove
	return a;
	
}

int best(int n)
{
	int returnthis;
	int a1, a2;
	a1 = n - n%7;
	a2 = n + 7 -n%7;
	a1 += align(a1, a2);
	a2 += align(a1, a2);
	if(change(n,a1) >= change(n,a2))
		returnthis = a2;
	else 
		returnthis = a1;
	//cout << "best : returnthis = " << returnthis << endl;   //remove
	return returnthis;
}

int main ()
{
	init_code();
	
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int n;
		cin >> n;
		int ans = 0;
		if(n%7 == 0)
			ans = n;
		else
		{
			ans = best(n);
		}
		cout << ans << endl;
	}
	return 0;
}