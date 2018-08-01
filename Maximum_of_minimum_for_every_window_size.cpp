#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n,temp;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    stack<int> s;
	    vector <int> arr;
	    vector <int> next_smaller;
	    vector <int> prev_smaller;
	    vector <int> ans;
	    
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin>>temp;
	        arr.push_back(temp);
	        next_smaller.push_back(0);
	        prev_smaller.push_back(0);
	        ans.push_back(0);
	    }
	    ans.push_back(0);
	    
	    s.push(0);
	    for(int i = 1 ; i < n ; i++)
	    {
	        if(s.empty())
	        {
	            s.push(i);
	            continue;
	        }
	        while((!s.empty()) && arr[i] < arr[s.top()])
	        {
	            next_smaller[s.top()] = i;
	            s.pop();
	        }
	        s.push(i);
	    }
	    while(!s.empty())
	    {
	        next_smaller[s.top()] = n;
	        s.pop();
	    }
	           
	    s.push(n-1);
	    for(int i = n-2 ; i >=0 ; i--)
	    {
	        if(s.empty())
	        {
	            s.push(i);
	            continue;
	        }
	        while((!s.empty()) && arr[i] < arr[s.top()])
	        {
	            prev_smaller[s.top()] = i;
	            s.pop();
	        }
	        s.push(i);
	    }
	    while(!s.empty())
	    {
	        prev_smaller[s.top()] = -1;
	        s.pop();
	    }
	    for(int i = 0 ; i < n ; i++)
	    {
	        int len = next_smaller[i] - prev_smaller[i]-1;
	        ans[len]  = max(ans[len],arr[i]);
	    }
	    
	    for(int i = n-1 ; i >=0 ; i--)
	    {
	        ans[i] = max(ans[i],ans[i+1]);
	    }
	    for(int i = 1 ; i < n ; i++)
	        cout<<ans[i]<<" ";
	    cout<<ans[n]<<endl;
	    
	    
	    
	}
	return 0;
}