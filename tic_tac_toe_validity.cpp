#include<bits/stdc++.h>
using namespace std;
int owin(std::vector<char> board,int xcount,int ocount)
{

	if(ocount != xcount)
			return 0;
	int flag =0;

	if ((board[0] == board[1] && board[1] == board[2] && board[2] == 'O')  )	
		return 1;

	if((board[3] == board[4] && board[4] == board[5] && board[5] == 'O'))
		return 1

}
int main()
 {
	//code
	int t,n,c,xcount,ocount;
	cin>>t;
	while(t--)
	{
	    vector<char> board;
	    n = 9;
	    xcount = ocount = 0;
	    while(n--)
	    {
            cin>>c;
            board.push_back(c);
            if(c == 'X')
                xcount++;
            else
                ocount++;
        }
        if(xcount != ocount+1 || xcount != ocount)
        {
            count<<"Invalid"<<endl;
            continue;
        }
        if(owin(board))
        {

        }
            
	    
	}
	return 0;
}