int height(Node *root)
{
    if(root == NULL)
        return 0;
    
    return 1 + min(height(root->left),height(root->right));
    
}
int diameter(Node* node)
{
   // Your code here
   
   if(node == NULL)
        return 0;
   int lheight,rheight,ldiameter,rdiameter    ; 
    lheight = height(node->left);
    rheight = height(node->right);
    
    ldiameter = diameter(node->left);
    rdiameter = diameter(node->right);    
    
   return max(lheight+rheight+1,max(ldiameter,rdiameter));
}