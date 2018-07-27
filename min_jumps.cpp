#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t,n,temp;

	cin>>t;

	while(t--)
	{
		vector<int> arr,mjumps,parrent;
		cin>>n;

		mjumps.push_back(0);
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>temp;
			arr.push_back(temp);
			mjumps.push_back(INT_MAX);
			parrent.push_back(-1);

		}
		for (int i = 1; i < n; ++i)
		{
			for (int j = 0; j < i; ++j)
			{
				
				if (i<=j+arr[j])
				{
					
					mjumps[i] = min(mjumps[i],mjumps[j]+1);
				}

			}
			
		}
		cout<<mjumps[n-1]<<endl;
		


	}


}