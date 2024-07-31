/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O

int main ()
{
	init_code();
	//fastio();
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int n;
		cin >> n;
		long long int arr[n], brr[n], input, last;
		vector<set<long long int>> v;
		vector<set<long long int>> samepool;
		int insertedsomewhere = 0, lastinsertedinto = 0;
		int ans = 0;
		for(int i = 1; i<n; i++)
		{
			cin >> input;
			int vv = v.size();
			for(int vectorele = 0; vectorele < vv; vectorele++)
			{
				// if(vectorele.find(input) != vectorele.end())
				for(auto setele = v[vectorele].begin(); setele!=v[vectorele].end(); setele++)
				{
					if(*setele == input)
					{
						insertedsomewhere = 1;
						break;
					}
					if(*setele & input != 0)
					{
						int pp = samepool.size();
						if(insertedsomewhere > 0)
						{
							for(int pool = 0; pool < pp; pool++)
							{
								if(find(samepool[pool].begin(), samepool[pool].end(), lastinsertedinto) != samepool[pool].end())
									samepool[pool].insert(vectorele);
								lastinsertedinto = vectorele;
							}
						}
						else
						{
							v[vectorele].insert(input);
							insertedsomewhere = 1;
							lastinsertedinto = vectorele;
							//samepool.insert({lastinsertedinto});
						}
					}
				}
			}
			if(insertedsomewhere == 0)
			{
				v.push_back({input});
			}
			else
			{
				insertedsomewhere = 0;
			}		
			arr[i] = brr[n] = input;
		}
		sort(arr, arr+n);
		int u;
		for(int i = 0; i<n; i++)
		{
			u = find(arr.begin(), arr.end(), brr[i]) - arr.begin();
			if(u != i)
			{
				int foundu = -1, foundi= -1, setindex;
				for(auto vecele = v.begin(); vecele != v.end(); vecele++)
				{
					setindex = vecele - v.begin();
					if( find(vecele.begin(), vecele.end(), brr[u]) != vecele.end() )
						foundu = setindex;
					if( find(vecele.begin(), vecele.end(), brr[i]) != vecele.end() )
						foundi = setindex;
					if(foundi != -1 && foundu != -1)
						break;
				}
				if(foundi != foundu)
				{
					int foundfoundu = -1, foundfoundi = -1, setindex;
					for(auto vecele = samepool.begin(); vecele != samepool.end(); vecele++)
					{
						setindex = vecele - samepool.begin();
						if( find(vecele.begin(), vecele.end(), brr[u]) != vecele.end() )
							foundfoundu = setindex;
						if( find(vecele.begin(), vecele.end(), brr[i]) != vecele.end() )
							foundfoundi = setindex;
						if(foundfoundi != -1 && foundfoundu != -1)
							break;
					}
					if(foundfoundi != foundfoundu)
					{
						ans = 0;
					}
					else
					{
						ans = 1;
					}
				}
				else
				{
					ans = 1;
				}
			}
		}
		if(ans == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
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