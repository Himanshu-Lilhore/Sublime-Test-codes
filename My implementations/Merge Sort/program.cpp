/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>
using namespace std;
void init_code();  // for online judge 
void fastio();     // for fast I/O

void merge(int arr[], int left, int mid, int right)
{
	int leftCount = mid - left + 1;
	int rightCount = right - mid;
	int arrLeft[leftCount];
	int arrRight[rightCount];

	for(int i = 0; i<leftCount; i++)
	{
		arrLeft[i] = arr[left + i];
	}
	for(int i = 0; i<rightCount; i++)
	{
		arrRight[i] = arr[mid + i + 1];
	}

	int leftIndex = 0, rightIndex = 0;
	int arrayCap = rightCount + leftCount;
	for(int i = 0; i<arrayCap; i++)
	{
		if(leftIndex == leftCount)
		{
			while(i<arrayCap)
			{
				arr[left + i] = arrRight[rightIndex];
				rightIndex++;
				i++;
			}
			break;
		}
		if(rightIndex == rightCount)
		{
			while(i<arrayCap)
			{
				arr[left + i] = arrLeft[leftIndex];
				leftIndex++;
				i++;
			}
			break;
		}

		if(arrLeft[leftIndex] <= arrRight[rightIndex])
		{
			arr[left + i] = arrLeft[leftIndex];
			leftIndex++;
		}
		else
		{
			arr[left + i] = arrRight[rightIndex];
			rightIndex++;
		}
	}
}

void mergeSort(int arr[], int left, int right)
{
	if(left >= right) return;

	int mid = left + (right-left)/2;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid+1, right);
	merge(arr, left, mid, right);
}

int main ()
{
	init_code();
	//fastio();

	// input
	int size, input;
	cin >> size;
	int arr[size];
	for(int i = 0; i<size; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	// solution
	mergeSort(arr, 0, size-1);

	// output
	for(int i : arr)
		cout << i << " ";

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