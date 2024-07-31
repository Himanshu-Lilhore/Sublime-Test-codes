/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O



struct Item{
    int value;
    int weight;
};


//  Driver Code Ends
//class implemented

/*
struct Item{
    int value;
    int weight;
};
*/

bool comparator(Item i1, Item i2)
{
    cout << "h1" << endl;      // debug
    int v1 = i1.value;
    int v2 = i2.value;
    int w1 = i1.weight;
    int w2 = i2.weight;
    double value1 = 1.0 * (v1);
    double value2 = 1.0 * (v2);
    double weight1 = 1.0 * (w1);
    double weight2 = 1.0 * (w2);
    
    cout << v1 << " " << v2 << " " << w1 << " " << w2 << endl;
    
    double worth1 = value1/ weight1;
    double worth2 = value2/ weight2;
    
    cout << worth1 << " " << worth2 << endl;     // debug
    cout << "h2" << endl;      // debug
    
    if(worth1 > worth2) return true;
    else if(worth1 < worth2) return false;
    else if(weight1 > weight2) return true;
    else if(weight1 < weight2) return false;
    else if(value1 > value2) return true;
    else if(value1 > value2) return false;
    else return false;
}

class Solution
{
    public:
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        double ans = 0, curWeight = 0;
        sort(arr, arr+n, comparator);
        //for(int i = 0; i<n; i++)
        // {
        //     cout << arr[i].value << ' ';
        // }
        int value, weight;
        for(int i = 0; i<n; i++)
        {
            cout << "h3" << endl;      // debug
            value = arr[i].value;
            weight = arr[i].weight;
            if(weight < W - curWeight)
            {
                cout << "h4" << endl;      // debug
                ans += value;
                curWeight += weight;
            }
            else
            {
                cout << "h5" << endl;      // debug
                ans += ((1.0*value)/weight) * (W - curWeight);
                break;
            }
        }
        return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	init_code();
	int t=1;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends


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