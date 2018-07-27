#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t,temp,n,k,prevtemp;
	cin>>t;
	while(t--)
	{
		int arr[20][61]={{0}};



		cin>>n>>k;

	
        for (int j = 1; j <= k; ++j)
			arr[1][j] = j;
			
		for (int i = 2; i <= n; ++i)
		{
			
			for (int j = 1; j <= k; ++j)
			{
				prevtemp = 100;
				for (int m = 1; m <= j; ++m)
				{
				   // cout<<"i: "<<i<<" & j: "<<j<<endl;
				    //cout<<"max ("<<arr[i-1][m-1]<<" , "<<arr[i][j-m]<<") "<<endl;
					temp = max(arr[i-1][m-1],arr[i][j-m]  );
					prevtemp = min(prevtemp,temp);

				}
				arr[i][j] = 1+ prevtemp;
			}
		}
		/*
		for (int i = 0; i <= n; ++i)
		{	for (int j = 0; j <= k; ++j)
			{    cout<<arr[i][j]<<" ";}
		    cout<<endl;
		}*/
			  cout<<arr[n][k]<<endl;


	}
	return 0;
}