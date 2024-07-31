/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O

const int two = 2;
const tw[two];


void blobb(int[][tw[1]]* blobvalue,int i,int j, int x, int y, int* blobs, int colour,int[][y]* arr)
{
	blobvalue[i][j] = *(blobs);
	if(i-1 >= 0 && j-1 >= 0)
	{
		if(blobvalue[i-1][j-1] == 0 && colour == arr[i-1][j-1])
			blobb(blobvalue,i-1,j-1,x-,y,blobs, colour, arr);
			//blobvalue[i-1][j-1] = *(blobs);
	}
	if(i-1 >= 0 && j+1 < y)
	{
		if(blobvalue[i-1][j+1] == 0 && colour == arr[i-1][j+1])
			blobb(blobvalue,i-1,j+1,x,y,blobs, colour, arr);
			//blobvalue[i-1][j+1] = *(blobs);
	}
	if(i+1 < x && j-1 >= 0)
	{
		if(blobvalue[i+1][j-1] == 0 && colour == arr[i+1][j-1])
			blobb(blobvalue,i+1,j-1,x,y,blobs, colour, arr);
			//blobvalue[i+1][j-1] = *(blobs);
	}
	if(i+1 < x && j+1 < y)
	{
		if(blobvalue[i+1][j+1] == 0 && colour == arr[i+1][j+1])
			blobb(blobvalue,i+1,j+1,x,y,blobs, colour, arr);
			//blobvalue[i+1][j+1] = *(blobs);
	}
}



int main ()
{
	init_code();
	//fastio();
	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int k, q, x, y;
		cin >> x >> y >> k >> q;
		tw[0] = x;
		tw[1] = y;
		int arr[x][y];
		memset(arr, 0, sizeof(arr));  // 0 means white
		int count = 1;  // colour counter
		int xi, yi;
		for(int i = 0; i<q; i++)
		{
			cin >> xi >> yi;
			memset(arr[xi-1],count,sizeof(arr[xi-1]));
			for(int j = 0; j<yi; j++)
			{
				arr[xi][j] = count;
			}
			count++;
		}

		int blobs = 0; // blobs of colours
		int blobvalue[x][y];   // if that cell is counted in blob counting or not // 0 if not counted, 1 otherwise
		memset(blobvalue, 0, sizeof(blobvalue));
		for(int i = 0; i<x; i++)
		{
			if(blobvalue == 0)
			{
				for(int j = 0; j<y; j++)
				{
					if(arr[x][y] != 0) blobs++;
					blobb(blobvalue,i,j,blobs,arr[x][y],arr);
				}
			}
		}
		cout << blobs << endl;

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