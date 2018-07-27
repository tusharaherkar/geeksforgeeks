#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,len,l,start,maxlen,flag;
	string s;
	cin>>t;
	while(t--)
	{
	    
	    cin>>s;
	    len = s.length();
	    int arr[len][len];
	    memset(arr,0,sizeof(arr));
	    for(int i = 0 ; i < len ;i++)
	    {
	        arr[i][i] = 1;
	        start = 0;
	        maxlen =1;
	    }
	    flag =0;
	    for(int i = 0 ; i < len-1 ;i++)
	    {
	        if(flag ==1 && s[i] == s[i+1])
	        {
	            arr[i][i+1] =1;
	            start = min(i,start);
	            maxlen =2; 
	            
	        }
	        else if(s[i] == s[i+1])
	        {
	            arr[i][i+1] =1;
	            start = i;
	            maxlen =2; 
	            flag =1;
	            
	        }
	    }
	    
	    for(int l = 3 ; l <= len ; l++)
	    {
	        for(int i = 0 ; i < len ;i++)
	        {
	            int j = i+l -1;
	           
	            if(s[i] == s[j] && arr[i+1][j-1] ==1)
	            {
	                arr[i][j]= 1;
	                if(l > maxlen) 
	                {
	                    start = i ;
	                    maxlen =l;
	                }
	            }    
	            
	        }
	    }
	    for(int i = start; i<=start+maxlen-1;i++)
	            cout<<s[i];
	    cout<<endl;
	    
	}
	return 0;
}