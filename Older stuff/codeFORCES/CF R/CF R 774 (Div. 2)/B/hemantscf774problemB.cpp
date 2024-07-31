#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<numeric>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE

	
	int t;
	cin>>t;
	while(t--)
		{
		int n;
		cin>>n;
		vector<pair<long long int,double>> v(n,pair<long long int,double>());
		for(pair<long long int,double> &p:v) cin>>(p.first);
		sort(v.begin(),v.end(),[](pair<long long int,double> &left,pair<long long int,double> &right)->bool{
		return left.first>right.first;
		});
		//for(pair<long long int,double> &p:v) cout<<(p.first)<<" ";
		//cout<<endl;
		long long int sum=accumulate(v.begin(),v.end(),0LL,[](long long int sub_sum,pair<long long int,double> &p)->long long int{
		return sub_sum+p.first;
		});
		//cout<<"Sum : "<<sum<<endl;
		for(pair<long long int,double> &p:v) p.second=(p.first*100.0)/sum;
		double bluePercent=0;
		double redPercent=v.back().second;
		int blueCount=0;
		int redCount=1;
		bool ans=false;
		for(int blueItr=0,redItr=n-2;(blueCount+redCount)<n;blueItr++,redItr--)
		{
		bluePercent+=v[blueItr].second;
		redPercent+=v[redItr].second;
		if(bluePercent>redPercent && redCount>blueCount)
		{
		ans=true;
		break;
		}
		if(bluePercent>50.0)
		{
		ans=true;
		break;
		}
		if(blueCount+redCount > n)
		{
			ans=false;
			break;
		}
		}
		if(ans) cout<<"YES\n";
		else cout<<"NO\n";
		}
	return 0;
}