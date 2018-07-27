#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,temp;

	cin>>t;

	while(t--)
	{

		vector <int > tr;
		cin>>n;

		for (int i = 0; i <= n; ++i)
		{
			cin>>temp;
			tr.push_back(temp);
		}
		
		temp = 0;
		for (int i = 0; i < n; ++i)
		{
			temp += tr[i];
			if(temp%2 == 0)
					temp+=1;



		}
		temp+=tr[n];
		cout<<temp<<endl;
	}
	




	return 0;
}