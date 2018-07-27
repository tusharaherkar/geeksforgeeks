#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n,temp;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    int len1,flag = 0;
	    multiset <char> s;
	    cin>>s1;
	    cin>>s2;
	    if(s1.length() != s2.length())
	    { 
	       cout<<"NO"<<endl;
	       continue;
	    }
	    len1 = s1.length();
	    
	    for(int i = 0 ; i< len1 ; i++)
	        s.insert(s1[i]);
	        
	     //cout<<"size: "<<s.size();  
	    for(int i = 0 ; i< len1 ; i++)     
	    {
	        if(s.count(s2[i]))
	        {
	            s.erase(s.find(s2[i]));
	            
	        }
	        else
	        {
	           cout<<"NO"<<endl;
	            flag =1;
	            break;
	            
	        }
	    }
	    
	    if(flag == 0)
	        cout<<"YES"<<endl;
	        
	    
	}
	return 0;
}