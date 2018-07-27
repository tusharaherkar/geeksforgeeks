#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,  n,len;
	cin>>t;
	while(t--)
	{
	    
	    vector <int> arr,farr;
	    cin>>n;
	    
	    for(int i = 0 ; i < n ;i++)
	    {
	        cin>>len;
	        arr.push_back(temp);
	        farr.push_back(1);
	        
	    }
	    
	    for(int i = 1 ; i < n ;i++)
	    {
	    	for (int j = 0; j < i; ++j)
	    	{
	    		if(arr[j] < arr[i])
	    		{
	    			farr[i] = farr[j]+1;

	    		}
	    	}
	   	}
	   	len = INT_MIN ;
	   	for (int i = 0; i < n; ++i)
	   	{
	   		if(farr[i]> len)
	   		{
	   			len = farr[i];
	   		}
	   	}
	    cout<<len<<endl;
	}
	return 0;
}