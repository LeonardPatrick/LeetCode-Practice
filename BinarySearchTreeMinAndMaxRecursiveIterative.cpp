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



int min(struct Node* p)
{

  if(p == NULL) {cout << "Tree Empty" << endl; return -1;}

  while(p -> left != NULL)
    {
      p = p -> left;
    }

  return p -> data;



}



int max(struct Node* p)
{

  if(p == NULL) {cout << "Tree Empty" << endl; return -1;}

  while(p -> right != NULL)
    {
      p = p -> right;
    }

  return p -> data;



}



int minRec(struct Node* p)
{

 if(p == NULL) {cout << "Tree Empty" << endl; return -1;}


 if(p -> left == NULL) return p -> data;
 else  return minRec(p -> left);




}





int maxRec(struct Node* p)
{

 if(p == NULL) {cout << "Tree Empty" << endl; return -1;}


 if(p -> right == NULL) return p -> data;
 else  return maxRec(p -> right);




}



int main()
{


  struct Node* head = NULL;

  //  cout << min(head) << endl;
  // cout << max(head) << endl;




  insert(&head, 15);

  // cout << min(head) << endl;
  // cout << max(head) << endl;

  insert(&head, 10);
  insert(&head, 20);
  insert(&head, 25);
  insert(&head, 12);


  cout << minRec(head) << endl;
  cout << maxRec(head) << endl;

  // cout << min(head) << endl;
  // cout << max(head) << endl;

  


  return 0;

}
