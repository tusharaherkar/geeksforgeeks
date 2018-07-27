 #include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	int t,n,topp;
	long long area,maxarea;
	cin>>t;
	while(t--)
	{
	    stack <int> s;
	    area=maxarea=0;
	    vector<int> vr;
	    cin>>n;
	    for(int i = 0 ; i < n;i++)
	    {
	        cin>>topp ;
	        vr.push_back(topp);
	    }
	    s.push(0);
	    for(int j = 1 ; j < n;j++)
	    {
	        if( (!s.empty()) && vr[j]<vr[s.top()])
	        {
	        	
	        	while((!s.empty()) && vr[s.top()]>vr[j] )
	        	{
	        	    
	        		topp = s.top();
	        		s.pop();		
	        		area = vr[topp]	* ((s.size() == 0)? j : (j - s.top() - 1 ));
	        		if(area > maxarea)
	        			maxarea = area;  
	        			
	        		
	        		
	        	}	             	
	        	
	        }
	       
	            s.push(j);
	        
	    }
	    
	    while(!s.empty())
	    {
	    	topp = s.top();
    		s.pop();		
    		area = vr[topp]	* ((s.empty())? n : (n - s.top()-1));
    		if(area > maxarea)
    			maxarea = area;
    		
	    }
		cout<<maxarea<<endl;
	}
	return 0;
}