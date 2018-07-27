#include<bits/stdc++.h>
using namespace std;
bool findfun(vector<long long> &arr,int end)
{
	set <long long> final;

	cout<<endl;
	
	for (int i = 0; i < end; ++i)
	{
		if(final.count(arr[i]))
		{
		   // cout<<"first: "<<arr[i]<<" second: "<<arr[end] -arr[i]<<" end: "<<arr[end];
			return true;
		}
		else
			final.insert(arr[end] - arr[i]);
	}
	return false;
}
int main()
 {
	//code
	int t,n,temp;
	cin>>t;
	while(t--)
	{
		int flag = 0;
		set <long long> s;
		vector <long long> arr;
	    cin>>n;
	    while(n--)
	    {
	    	cin>>temp;
	    	if(!s.count(temp*temp))
	    		s.insert(temp*temp);
	    }		
	    n = s.size();
	    for(set <long long>::iterator it = s.begin();it!=s.end();it++ )
	    {
	    	arr.push_back(*it);
	    	
	    }
	    for(int i = n-1 ; i>=2 ;i--)
	    {
	    	if(findfun(arr,i))
	    	{
	    		cout<<"Yes"<<endl;
	    		flag = 1;
	    		break;

	    	}
	    }
	    if (flag== 0)
	    {
	    	cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}