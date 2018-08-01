using namespace std;
class node
{
    public:
    long data;
    node * left;
    node * right;
    
};
class operations
{
    public:    
    node *head;
    vector <long >  inorder
    operations () 
    {
      head =NULL;
    }
    void insert(long int data)
    {
      
      node *temp = new node;
      temp->data = data;
      temp ->left = temp ->right = NULL;
      if(head == NULL)
      {
        head = temp;
      }
      else
      {
          node *trav = head,*parent = head;
          while(trav!=NULL)
          {
              parent = trav;
                if(trav -> data < data)
                    trav = trav->right;
                else
                    trav = trav->left;
                
          }
          if(parent->data < data)
                parent->right = temp;
          else
                parent->left = temp;
            
                          
      }
      
  }
 
  long preorder(node *root)
  {
      if(root!=NULL)
      {
          return postorder(root->left);
          postorder(root->right);
          cout<<root->data<<" ";
      }
  }

  long inorder(node *root)
  {
      if(root!=NULL)
      {
         return inorder(root->left);
          return root->data;
          return inorder(root->right);
         
      }
  }
  
    
};
int main()
 {
	//code
	long t,n,temp;
	cin>>t;
	while(t--)
	{
	    cin>>n>>q;
	    unordered_map <long,long> m;
	    operations o;
	    for(long  i = 0 ; i< n ; i++)
	    {
	        cin>>temp;
	        o.insert(temp);

	        
	    }
      o.preorder
	    while(q--)
      {

        cout<<endl;  
      }


	    
	    //o.inorder(o.head);
	        
	    
	    
	}
	return 0;
}