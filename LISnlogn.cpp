#include<bits/stdc++.h>
using namespace std;
int ceilarr(vector <int> arr,vector <int> farr,int low, int high,int val)
{
   
    
    int mid = (low + high)/2;
    if(arr[farr[mid]] == val)
    {
        return mid;
    }
    else if(arr[farr[mid]] > val)
    {
        if(mid-1 >= low && arr[farr[mid-1]] < val )
            return mid;
        else
            return ceilarr(arr,farr,low,mid-1,val);
    }
    else if(arr[farr[mid]] < val)
    {
        if(mid+1<=high && arr[farr[mid+1]] > val)
            return (mid+1);
        else
            return ceilarr(arr,farr,mid+1,high,val);
        
    }
    /* for(int i = 0 ; i <= high ;i++)
    {
        if(arr[farr[i]] > val)
            return i;
    }*/
    
}
int main()
 {
	//code
	int t, temp, n,len,ceilint;
	cin>>t;
	while(t--)
	{
	    
	    vector <int> arr,farr,parrent;
	    cin>>n;
	    
	    if(n == 0)
	    {
	    	cout<<"0"<<endl;
	    	continue;
	    }
	    for(int i = 0 ; i < n ;i++)
	    {
	        cin>>temp;
	        arr.push_back(temp);
	        farr.push_back(-99);
	        parrent.push_back(-1);
	    }
	    len = 0;
	    farr[0] = 0;
	    
	    for(int i = 1 ; i < n ;i++)
	    {
	        if(arr[i]< arr[farr[0]] )
	        {
	            farr[0] = i;
	        }
	        else if(arr[i]> arr[farr[len]])
	        {
	            
	            
	            farr[++len] = i;
	            parrent[i] =farr[len-1];
	        }
	        else
	        {
	            
	            ceilint = ceilarr(arr,farr,0,len,arr[i]);
	            farr[ceilint] = i;
	            parrent[i] = farr[ceilint-1];
	        }
	    }
	    cout<<len+1<<endl;
	}
	return 0;
}