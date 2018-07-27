#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,temp,n1,n2;
	
	
	cin>>t;
	while(t--)
	{
		int arr[101][101] = {{0}};
		string s1,s2;
		
		cin>>n1>>n2;
		
		cin>>s1;
		cin>>s2;
		
		for(int  i = 1 ; i <= n2 ; i++)
		{
			for(int j = 1 ; j <= n1; j++)	
			{
				if(s2[i-1] == s1[j-1])	
				{
					arr[i][j] = arr[i-1][j-1]+1;
					
				
				}
				else
				{
					arr[i][j] = max(arr[i][j-1],arr[i-1][j]);
				}
			
			
			}
		}
		cout<<arr[n2][n1]<<endl;
	
	
	
	}


	return 0;
}
