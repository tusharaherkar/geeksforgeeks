#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
	int brr[high-low+1];
	memset(brr,0 , sizeof(brr));

	int i = low;
	int j = mid+1;
	int k = 0;

	while(i <= mid && j <= high)
	{
		if(arr[i] < arr[j])
		{
			brr[k++] = arr[i++];
		}	
		else
			brr[k++] = arr[j++];	
	}
	while(i<=mid)
		brr[k++] = arr[i++];
	while(j <= high)
		brr[k++] = arr[j++];
	
	k=0;
	for (int i = low; i <= high; ++i)
	{
		arr[i] = brr[k++];
	}
}

void mergesort(int arr[],int low,int high)
{

	if (low < high)
	{
		int mid = (low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}

}




int main()
{
	int arr[10] = {1,5,15,2,19,-1,6,90,89,65};
	mergesort(arr,0,9);
	for(int i = 0 ; i < 10 ; i++)
	        cout<<arr[i]<<" ";
}