/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code(){
	//fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}


int main ()
{
	init_code();
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
	    
	    
	    int turns, n;
	    cin >> n >> turns;
	    int rem = 1;
	    
	    if(ceil(log2(n)) != floor(log2(n)))
	    {
	        
	    
	    for(int i=0; i<turns; i++)
	    {
	        rem = (2*rem) % (n-1);
	        if(rem == 1)
	        {
	        	turns = (turns % (i+1)) +1;
	        	i = 0;
	        }
	    }
	    A:
	    int last = 1;
	    cout << 1 << " ";
	    int present;
	    for(int j=1; j<n-1; j++)
	    {
	        present = (last + rem)%(n-1);
	        if(present == 0)
	            present = n-1;
	        cout << present << " ";
	        last = present;
	    }
	    cout << n << " ";
	    cout << endl;
	    }
	    
	    
	    else
	    {
	    int arr[n], brr[n];
	    int count = 0;
	    for(int i = 0; i<n ; i++)
	    {
	        arr[i] = i+1;
	        brr[i] = i+1;
	    }
	    int k = 1;
	    for(;;k++)
	    {
	        int j=0;
	        for(int i = 0; i<n-1 ; i++,j+=2)
	        {
	            arr[i] = brr[j]; 
	            if(j == n-2)
	            {
	                j = -1;
	                
	            }
	        }
	        int rightplace = 0;
	        for(int m=0; m<n; m++)
	        {
	            brr[m] = arr[m];
	            if(arr[m] == m+1)
	                rightplace++;
	        }
	        if(rightplace == n)
	        {
	            break;
	        }
	    }
	    k = turns%k;
	    for(int g=0; g<k; g++)
	    {
	        int j=0;
	        for(int i = 0; i<n ; i++,j+=2)
	        {
	            arr[i] = brr[j];  
	            if(j == n-2)
	            {
	                j = -1;
	            }
	        }
	        for(int m=0; m<n; m++)
	        {
	            brr[m] = arr[m];
	        }
	    }
	    for(int i=0; i<n; i++)
	    {
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	    }
	}
	return 0;
}