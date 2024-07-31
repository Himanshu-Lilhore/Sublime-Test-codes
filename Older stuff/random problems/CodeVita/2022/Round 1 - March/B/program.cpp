#include<bits/stdc++.h>
using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O

double areaOfPolygon(double x[], double y[], int n){
   double area = 0.0;
   int j = n - 1;
   for (int i = 0; i < n; i++){
      area += (x[j] + x[i]) * (y[j] - y[i]);
      j = i;
   }
   return abs(area / 2.0);
}

void PrintAllSubsets(int *arr, int n){    
    int snum = 0;
    vector<double> v;
    while(snum<pow(2,n)){
        for(int i=0;i<n;++i){
            if((snum&(1<<i))!=0){
                v.push_back(arr[i]);
            }
        }
        cout<<endl;
        ++snum;
    }
            
}


int main()
{
	init_code();
	//fastio();
	int n; 
	cin >> n;
	double arr[n];
	double brr[n];
	int ii, jj;
	int crr[n];
	for(int i = 0; i<n; i++)
	{
		crr[i] = i+1;
		cin >> ii >> jj;
		arr[i] = ii;
		brr[i] = jj;
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