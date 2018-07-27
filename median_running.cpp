#include<bits/stdc++.h>
using namespace std;


int main()
{
	priority_queue <int > s;
	priority_queue <int, vector <int>, greater <int> > g;
	
	
	int n,x,temp;
	vector <int > arr;
	
	
	cin>>n;
	
	for(int i = 0 ; i < n ;i++)
	{
	    cin>>temp;
	    arr.push_back(temp);
	}
	
	double med = arr[0];
	
	cout<<med<<endl;
	
	s.push(arr[0]);
	
	for(int i = 1; i < n ; i++)
	{
		x  = arr[i];
		if(s.size() > g.size())
		{	
			if(x < med)
			{
			    temp = s.top();
				g.push(temp);
				s.pop();
				s.push(x);
				
			}
			else
			{
				g.push(x);			
			}
			med = (g.top()+s.top())/2;			
		}
		else if(s.size() < g.size())
		{
			if(x > med )
			{
			    temp = g.top();
				s.push(temp);
				g.pop();
				g.push(x);
			}
			else
			{
				s.push(x);
			
			}
			med = (g.top()+s.top())/2;
		}
		else
		{
			if(x <  med)
			{
				s.push(x);
				med = s.top();
			}	
			else
			{	
				g.push(x);
				med = g.top();
			}
			
		
		}			
		cout<<med<<endl;
		
		
			
	
	}


	return 0;
}
