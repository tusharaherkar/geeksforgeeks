#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,temp,n,m;
	
	
	cin>>t;
	while(t--)
	{
		vector <int> money;
		int p[310]={0};
		
		cin>>m;
		
		for(int i = 0 ; i < m ; i++)
		{
			cin>>temp;
			money.push_back(temp);		
		}
		cin>>n;
		p[0]=1;
		
		for(int i = 0 ; i < m ; i++)
		{
			for(int j = money[i] ; j <= n ; j++)
			{
				p[j]+=p[j-money[i]];	
			
			
			}
		}
		cout<<p[n]<<endl;
	}	
	return 0;
}	
