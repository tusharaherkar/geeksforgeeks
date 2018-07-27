#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,temp;
	cin>>t;
	
	while(t--)
	{
		set<int> arr;
		set<int> :: iterator it,it1;
		int currcon,conmax;
		cin>>n;
		
		while(n--)
		{
			cin>>currcon;
			if(!arr.count(currcon))
				arr.insert(currcon);
		}
		n= arr.size();
		currcon = 0,conmax=INT_MIN;
		it= arr.begin();
		it1= arr.begin();
		it1++;
		for(int i=0 ; i < n-1 ; i++,it++,it1++ )
		{
			if(*it1 == *it+1)
			{
			 	currcon++;
			}
			else
				currcon = 0;
				
			conmax = max(conmax,currcon);
		
		}
		
		cout<<conmax<<endl;
	
	
	}	





	return 0;
}
