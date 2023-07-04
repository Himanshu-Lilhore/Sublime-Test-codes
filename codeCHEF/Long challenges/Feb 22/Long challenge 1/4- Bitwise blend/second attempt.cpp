#include<bits/stcd++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int n, odds = 0, evens = 0, lastodd = -1, lasteven = -1, evensateven = 0, evensatodd = 0, input;
		long long int eaei = -233, eaoi = -233, oaei = -233, oaoi = -233;
		cin >> n;
		long long int arr[n];
		for(long long int i = 0; i<n; i++)
		{
			cin >> input;
			arr[i] = input;
			if(input&1 == 0)
			{
				odds++;
				lastodd = i;
			}
			else
			{
				evens++;
				lasteven = i;
				if(i%2 == 0)
					evensateven++;
				else
					evensatodd++;
			}
			if(eaei == -233 && input%2 == 0 && i%2 == 0)
			{
				eaei = i;
			}
			else if(eaoi == -233 && input%2 == 0 && i%2 == 1)
			{
				eaoi = i;
			}
			else if(oaei == -233 && input%2 == 1 && i%2 == 0)
			{
				oaei = i;
			}
			else if(oaoi == -233 && input%2 == 1 && i%2 == 1)
			{
				oaoi = i;
			}
		}
		if(lastodd == -1)
		{
			cout << -1 << endl;
			coutinue;
		}
		if(lasteven == -1)
		{
			arr[1] = arr[1]^arr[0];
			lasteven = 1;
			evens++;
			evensatodd++;
			eaoi = 1;
		}
		long long int count = 0;
		if(evens >= (n+1)/2)
		{
			// if(lasteven == -1)
			// {
			// 	count++;
			// }
			if(evensatodd < evensateven)
			{
				for(long long i = 0; i<n; i++)
				{
					if(i%2 == 0)
					{
						if(arr[i]%2 == 1)
						{
							count++;
						}
					}
					else
					{
						if(arr[i]%2 == 0)
						{
							count++;
						}
					}
				}
			}
			else
			{
				for(long long i = 0; i<n; i++)
				{
					if(i%2 == 0)
					{
						if(arr[i]%2 == 0)
						{
							count++;
						}
					}
					else
					{
						if(arr[i]%2 == 1)
						{
							count++;
						}
					}
				}
			}
		}
		else
		{
			if(evensatodd < evensateven)
			{
				for(long long i = 0; i<n; i++)
				{
					if(i%2 == 0)
					{
						if(arr[i]%2 == 1)
						{
							count++;
						}
					}
					else
					{
						if(arr[i]%2 == 0)
						{
							count++;
						}
					}
				}
			}
			else
			{
				for(long long i = 0; i<n; i++)
				{
					if(i%2 == 0)
					{
						if(arr[i]%2 == 0)
						{
							count++;
						}
					}
					else
					{
						if(arr[i]%2 == 1)
						{
							count++;
						}
					}
				}
			}
		}
	}
	return 0;
}