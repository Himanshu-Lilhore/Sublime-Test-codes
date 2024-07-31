#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE

	
	unsigned long long int n;
	cin>>n;
	vector<unsigned long long int> v(log2(n));
	unsigned long long int tmp=n;
	for(int i=(int)v.size()-1;i>=0;i--) v[i]=tmp,tmp/=2;
	char ans='a';
	unordered_map<char,string> ump;
	ump['a']=ump['d']="ab";
	ump['b']=ump['c']="cd";
	for(int i=0;i<(int)v.size();i++)
	{
		//cout<<v[i]<<endl;
		if(v[i]<=1) continue;
		//cout<<ump[ans]<<endl;
		//cout<<ump[ans][((v[i]&1)?1:0)]<<endl;
		ans=ump[ans][((v[i]&1)?1:0)];
	}
	cout<<ans<<endl;
	return 0;
}