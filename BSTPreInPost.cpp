#include<iostream>
#include<vector>
#include<queue>


using namespace std;

struct Node{

  int data;
  Node* left;
  Node* right;

};



struct Node*  GetNewNode(char x)
{

  struct Node* t  = new Node();
  t -> data = x;
  t -> left = NULL;
  t -> right = NULL;

  return t;

}

void insert(struct Node** p, char c)
{
  
  if((*p) == NULL) 
    {
      (*p) =  GetNewNode(c); 
    }
  else if( c <= (*p) -> data)
    {// go into left subtree
     
      insert(&((*p)-> left), c);
    }
  else
    {

      insert(&((*p) -> right), c);

    } 

}


/*
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


int Height(struct Node* p)
{

  if(p == NULL) return -1;

  return max(Height(p -> left), Height(p -> right)) + 1;


}


*/


void PrintLev(struct Node* p)
{


  if(p == NULL) return;

  queue<struct Node*> Q; 

  Q.push(p);


  while(!Q.empty())
    {

      cout << char(Q.front() -> data) << " ";
      if(Q.front()-> left != NULL ) Q.push(Q.front() -> left);
      if(Q.front()-> right != NULL ) Q.push(Q.front() -> right);
      Q.pop();
    }



}




void pre(struct Node* p)
{

  if(p == NULL) return;
  pre(p -> left);
  cout << char(p -> data) << " ";
  pre(p -> right);



}




void inO(struct Node* p)
{

  if(p == NULL) return;
  inO(p -> left);
  cout << char(p -> data) << " ";
  inO(p -> right);



}



void post(struct Node* p)
{

  if(p == NULL) return;
  post(p -> left);
  post(p -> right);
  cout << char(p -> data) << " ";


}








int main()
{


  struct Node* head = NULL;

  //  cout << min(head) << endl;
  // cout << max(head) << endl;




  insert(&head, 'F');

  // cout << min(head) << endl;
  // cout << max(head) << endl;

  insert(&head, 'D');
  insert(&head, 'J');
  insert(&head, 'B');
  insert(&head, 'E');
  insert(&head, 'G');
  insert(&head, 'K');
  insert(&head, 'A');
  insert(&head, 'C');
  insert(&head, 'I');
  insert(&head, 'H');

  //  PrintLev(head);

  post(head);



  


  return 0;

}
