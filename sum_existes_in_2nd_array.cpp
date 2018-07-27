#include <bits/stdc++.h>

using namespace std;

int main()
{


	long temp, t,n1,n2,flag,i,j;
	 
	
	cin>>t;
	while(t--)
	{
		vector <long long> arr1;		
		vector <long long> summation;
		
		unordered_set <long long> result;		
		
		cin>>n1;
		
		for( i = 0 ; i< n1 ;i++)
		{
			cin>>temp;
			arr1.push_back(temp);
		
		
		}
		cin>>n2;
		
		
		for( i = 0 ; i< n2 ;i++)
		{
			cin>>temp;
			
			summation.push_back(temp);			
		
		}
		flag = 0;
		for( i = 0 ; i < n1; i++)
		{
			
			if(result.count(arr1[i]) )
			{
					cout<<"1"<<endl;
					flag =1;
					break;
			}
			for(j =0 ; j <n2 ; j++)
			{
				
				result.insert(summation[j] - arr1[i]);
				
					
			}
			
		
		}
		if(flag == 0)
			cout<<"0"<<endl;
		
	
	
	}

    return 0;
}
	
	
