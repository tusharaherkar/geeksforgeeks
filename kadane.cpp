#include <bits/stdc++.h>

using namespace std;


int main()
{
	
	
	int n,temp,t,max_curr,max_so_far;
	
	cin>>t;
	
	while(t--)
	{
		vector <int> arr;
		cin>>n;
		
		
		for(int i = 0 ; i < n ; i++)
		{
			cin>>temp;
			arr.push_back(temp);
		}
		max_so_far = max_curr = arr[0];
		
		
		for(int i = 1 ; i < n ; i++)
		{
			max_curr = max(a[i] , max_curr+a[i]);
			max_so_far = max(max_so_far,max_curr);
			
	
		}
		cout<<max_so_far<<endl;
	}


	return 0;
}
