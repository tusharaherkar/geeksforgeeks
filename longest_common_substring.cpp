#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,temp,n1,n2;
	
	cin>>t;
	while(t--)
	{
		int arr[201][201]={{0}};
		string s1,s2;
		
		cin>>n1>>n2;
		
		cin>>s1;
		cin>>s2;
		
		
		for(int i = 1 ; i <= n1;i++)
		{
			for(int j = 1 ; j <= n2 ; j++)
			{
				if(s1[i-1] == s2[j-1])
				{
					arr[i][j] = arr[i-1][j-1]+1;
				
				}		
			
			}
		}		
		max = INT_MIN;
		for(int i = 1 ; i <= n1;i++)
			for(int j = 1 ; j <= n2 ; j++)
					if(arr[i][j]> max)
						max = arr[i][j];
			 
		cout<<max<<endl;
	
	}

	return 0;
}
