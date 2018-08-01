#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,m,n,temp;
	cin>>t;
	while(t--)
	{
	    cin>>m>>n;
	    string s1,s2;
	    int arr[m][n];
	    memset(arr,0,sizeof(arr));
	    
	    cin>>s1;
	    cin>>s2;
	    for(int i = 0 ; i<m ; i++)
	       for(int j = 0 ; j < n ; j++)
	       {
	           if(i == 0)
	           {
	               arr[i][j] = j;
	               continue;
	           }
	           if(j == 0)
	           {
	               arr[i][j] = i;
	               continue;
	           }
	                
	           if(s1[i] == s2[j])
	                arr[i][j] = arr[i-1][j-1];
	            else
	            {
	                arr[i][j] = min(arr[i-1][j-1], min(arr[i][j-1],arr[i-1][j]))+1;
	               
	            }
	       
	       }
	    cout<<arr[m-1][n-1]<<endl;
	}
	return 0;
}