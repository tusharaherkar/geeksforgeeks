int calculate_histogram(vector<int> vr)
{
    int area,maxarea,n,topp;
    stack <int> s;
    area=maxarea=0;
    
    n = vr.size();
    
    s.push(0);
    for(int j = 1 ; j < n;j++)
    {
        if( (!s.empty()) && vr[j]<vr[s.top()])
        {
            
            while((!s.empty()) && vr[s.top()]>vr[j] )
            {
                
                topp = s.top();
                s.pop();        
                area = vr[topp] * ((s.size() == 0)? j : (j - s.top() - 1 ));
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
        area = vr[topp] * ((s.empty())? n : (n - s.top()-1));
        if(area > maxarea)
            maxarea = area;
        
    }
    return maxarea;
}
int maxArea(int M[MAX][MAX],int n,int m)
{
    //n = rows m = cols
    vector<int> vr(n,0);
    
    int maxarea = 0,area=0;
    for(int j = 0 ; j < m ; j++)
    {
        for (int i = 0; i < n; ++i)
        {
            if(M[i][j] == 0)
            {
                vr[i] =0;
            }
            else
            {
                vr[i] += M[i][j];   
            }
        }
        area = calculate_histogram(vr);
        if(area> maxarea)
                maxarea = area;

    }    
    return maxarea;
}
