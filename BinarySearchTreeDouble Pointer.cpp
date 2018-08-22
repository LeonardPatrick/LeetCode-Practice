#include<iostream>
#include<vector>

using namespace std;

struct Node{

  int data;
  Node* left;
  Node* right;

};



struct Node*  GetNewNode(int x)
{

  struct Node* t  = new Node();
  t -> data = x;
  t -> left = NULL;
  t -> right = NULL;

  return t;

}

void insert(struct Node** p, int d)
{
  
  if((*p) == NULL) 
    {
      (*p) =  GetNewNode(d); 
    }
  else if( d <= (*p) -> data)
    {// go into left subtree
     
      insert(&((*p)-> left), d);
    }
  else
    {

      insert(&((*p) -> right), d);

    } 




}



void insertN(struct Node* p, int d)
{


  if(p == NULL) p =  GetNewNode(d);
  else
    {
      if(d <=  p -> data) insertN( p -> left, d);
      else insertN(p -> right, d);
    }


}




bool search(struct Node* p, int x)
{

  if(p == NULL) return false;

  else if(x == p -> data) return true;
  else if(x <= p -> data) return search(p -> left, x);
  else return search(p -> right, x);  

    
}



int main()
{


  struct Node* head = NULL;

  insert(&head, 15);
  insert(&head, 10);
  insert(&head, 20);
  insert(&head, 25);
  insert(&head, 12);

  cout << search(head, 13) << endl;

  


  return 0;

}
