#include<bits/stdc++.h>

using namespace std;

class trie
{
    public:
	int endofword;
	map <char , trie*> m; 
};
class trieoperations
{
	public:
	trie * root;
	trieoperations()
	{
		trie * temp = new trie;
		temp -> endofword = 0;
		root = temp;
	
	}
	
	void insertintotrie(string s)
	{
		trie * temp = root;
		int len = s.length();
		
		
		for(int i = 0 ; i < len ; i++)
		{
			map <char , trie* > ::iterator it;
			if( temp -> m.count( s[i]) )
			{
				it = temp -> m.find(s[i]);
				temp = it->second;
				if(i == len-1)
					temp->endofword = 1;
			}
			else
			{
				trie *newnode = new trie;		
				temp -> m.insert(make_pair(s[i],newnode));
				if(i == len-1)
					newnode -> endofword = 1;
				else
					newnode -> endofword = 0;
				temp = newnode;
				
			
			}	
		}
		
	
	}
	void searchfullword(string s)
	{
		trie * temp = root;
		int len = s.length();
		
		
		for(int i = 0 ; i < len ; i++)
		{
			map <char , trie* > ::iterator it;
			if( temp -> m.count( s[i]) )
    		{
				it = temp -> m.find(s[i]);
				temp = it->second;
				if(i == len-1)
				{	if(temp->endofword == 1)
						cout<<"Full word present!"<<endl;
					else
						cout<<"Full word not present!"<<endl;
				}		
			}
			else
			{
				cout<<"Full word not present!"<<endl;
				return ;
			
			}	
		}
		
	
	
	
	}
	void prefixpresent(string s)
	{
		trie * temp = root;
		int len = s.length();
		
		
		for(int i = 0 ; i < len ; i++)
		{
			map <char , trie* > ::iterator it;
			if( temp -> m.count( s[i]) )
    		{
				it = temp -> m.find(s[i]);
				temp = it->second;
				
			}
			else
			{
				cout<<"Prefix not present!"<<endl;
				return ;
			
			}	
		}
		cout<<"Prefix present!"<<endl;
	
	
	
	}
	void deletefullword(string s)
	{
		st
		
	
	
	}


};
int main()
{
	trieoperations t;
	
	string s;
	cin>>s;
	
	t.insertintotrie(s);
	t.insertintotrie("tusar");
	t.insertintotrie("account");
	t.searchfullword("tusar");
	t.prefixpresent("tush");
	t.prefixpresent("tusa");
	t.prefixpresent("account");

}

