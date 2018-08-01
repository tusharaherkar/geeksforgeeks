using namespace std;
class node
{
    public:
    long long data;
    node * left;
    node * right;
    
};
class operations
{
    public:    
    node *head;
    operations () 
    {
      head =NULL;
    }
    void insert(long long int data)
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
  void postorder(node *root)
  {
      if(root!=NULL)
      {
          postorder(root->left);
          postorder(root->right);
          cout<<root->data<<" ";
      }
  }
  void inorder(node *root)
  {
      if(root!=NULL)
      {
         inorder(root->left);
          cout<<root->data<<" ";
          inorder(root->right);
         
      }
  }
    
    
};
int main()
 {
	//code
	long long t,n,temp;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    
	    operations o;
	    for(long long  i = 0 ; i< n ; i++)
	    {
	        cin>>temp;
	        o.insert(temp);
	        
	    }
	    o.postorder(o.head);
	    cout<<endl;
	    //o.inorder(o.head);
	        
	    
	    
	}
	return 0;
}