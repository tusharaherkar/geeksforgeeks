#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,w,n;
	cin>>t;
	while(t--)
	{
		multimap < int , int >  v_w;
	    int v_ww[101][2],T[101][101];
	    cin>>n;
	    cin>>w;
	    
	    for(int i = 0;i < n ; i++)
	       cin>>v_ww[i][0];
	    
	    v_w.insert(make_pair(0,0));
	    
	    for(int i = 0;i < n ; i++)
	    {
	        cin>>v_ww[i][1];
	        v_w.insert(make_pair(v_ww[i][1],v_ww[i][0]));
	    }
	    
	    map <int,int> :: iterator  it = v_w.begin();
	   /* 
	    for(;it != v_w.end() ; it++)
	    {
	    	cout<<"first: "<<it->first<<" second: "<<it->second<<endl;    
	    
	    }
	    
	    
	    */
	    
	    for(int i = 0;i <= n ; it++,i++)
	        for(int j =0 ; j<=w ; j++)
	        {
	        	if(i == 0)
	        	{
	        		T[i][j] = 0;
	        	}
	            else if(j < it->first)
	            {
	            	T[i][j] = T[i-1][j] ;
	            
	            
	            }
	            else if( j >= it->first)
	            {
	            	T[i][j] = max(T[i-1][j] , (T[i-1][j-it->first]+it->second));            
	            }
	            
	        }
	        
	    /*
	    for(int i = 0;i <= n ; it++,i++)
	    {
	        for(int j =0 ; j<=w ; j++)
	        {
	        	cout<<T[i][j]<<" "	  ;
	        }
	        cout<<endl;
	    }
	   	*/
		cout<<T[n][w]<<endl;	    
	}
	return 0;
}
