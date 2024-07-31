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



int main() {
	init_code();
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    
	    int tt = d*b - abs(c-a);
	    if(tt >= 0)
	    {
    	    if(tt%b == 0) 
    	    {
    	        int yy = tt/b;
    	        if(yy%2 == 0)
        	        {
        	            cout << "yes" << endl;
        	        }
    	    }
	    }
	    else
	        cout << "no" << endl;
	   
	}
	return 0;
}