
#include  <bits/stdc++.h>
using namespace std;

int segtree[4000] = {0};
int rangeminquery(int qlow,int qhigh,int low , int high, int pos)
{
	if(qlow<= low &&  high <= qhigh )
		return segtree[pos];
		
	if(qlow> high || qhigh<low)	
		return INT_MAX;
	
	int mid = (low+high)/2;
	
	return min( rangeminquery(qlow,qhigh,low,mid,2*pos+1), rangeminquery(qlow,qhigh,mid+1,high,2*pos+2));
	


}
void update(int arr[],int low,int high,int idx,int value,int pos)
{
	if(low == high && low == idx)
	{
		segtree[pos] = value;
		arr[idx] = value;
		return;
	}
	int mid = (low+high)/2;
	
	if(low <= idx && idx<=mid)
		update(arr,low,mid,idx,value,2*pos+1);		
	else
		update(arr,mid+1,high,idx,value,2*pos+2);	
			
	segtree[pos] = min(segtree[2*pos+1],segtree[2*pos+2]);
	
}
void build(int arr[],int low,int high,int pos)
{
	if (low == high)	
	{
	    segtree[pos] = arr[low];
	    return;
	}
	int mid = (low+high)/2;
	build(arr,low, mid,2*pos+1);
	build(arr, mid+1,high,2*pos+2);
	segtree[pos] = min(segtree[2*pos+1],segtree[2*pos+2]);
	
		
	

}
int main()
{

    int arr[1000];
	
	int n,temp=-99;
	
	cin>>n;
	
	for(int i = 0 ; i<n ; i++)
	{
		cin>>arr[i];
		
		
	
	}
	for(int i = 0 ; i<n ; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	build(arr,0, n-1,0);
	for(int i = 0 ; i<4*n ; i++)
		cout<<segtree[i]<<" ";
	cout<<endl;
	temp = rangeminquery(2,3,0,n-1,0);
	cout<<temp<<endl;
	
	update(arr,0,n-1,2,-2,0);
	
	for(int i = 0 ; i<4*n ; i++)
		cout<<segtree[i]<<" ";
	cout<<endl;
	return 0;	
}
