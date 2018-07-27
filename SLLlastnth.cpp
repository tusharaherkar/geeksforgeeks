int getNthFromLast(Node *head, int n)
{
       Node *nth = head, *trav= head;
       
       
       while(n--)
       {
       		if(trav != NULL)
       		{
       			trav = trav -> next;
       		
       		}
       		else
       			return -1;
       			
       
       }
       while(trav != NULL)
       {
       		nth = nth ->  next;
       		trav = trav -> next;
       		
	   }
	   return (nth-> data);
}
