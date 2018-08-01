#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high)
{
	int pivot = arr[low];
	int start = low;
	int end = high;
	int temp = 0;
	while(start < end)
	{
		while(arr[start] <= pivot && start < end)
			start++;
		while(arr[end] > pivot )
			end--;
		if (start < end)
		{
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;

		}

	}
	arr[low] = arr[end];
	arr[end] = pivot;
	return end;

}
void quicksort(int arr[],int low,int high)
{
	if(low <= high)
	{
		int mid = partition(arr,low,high);
		quicksort(arr,low,mid-1);
		quicksort(arr,mid+1,high);

	}

}

int main()
{
	int arr[10] = {1,5,15,2,1,-1,6,90,1,65};
	quicksort(arr,0,9);
	for(int i = 0 ; i < 10 ; i++)
	        cout<<arr[i]<<" ";
}