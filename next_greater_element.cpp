#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n,temp;
	cin>>t;
	while(t--)
	{
	    vector <int> arr;
	    vector <int> farr;
	    stack <int> s;
	    
	    cin>>n;
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin>>temp;
	        arr.push_back(temp);
	        farr.push_back(0);
	    }
	    s.push(0);
	    for(int i = 1 ; i < n ; i++)
	    {
	       
	        if(s.empty() )
	        {
	            s.push(i);
	            continue;
	        }
	        
	        //cout<<"for arr["<<i<<"]: "<<arr[i]<<endl;
	        while((!s.empty() ) && arr[i] > arr[s.top()])
	        {
	         
	            farr[s.top()] = arr[i];
	            s.pop();
	        }
	        s.push(i);
	    }    
	    while(!s.empty())
	    {
	        farr[s.top()] = -1;
	        s.pop();
	    }
	    for(int i = 0 ; i < n-1 ; i++)
	            cout<<farr[i]<<" ";
	    cout<<farr[n-1]<<endl;
	    
	}
	return 0;
}