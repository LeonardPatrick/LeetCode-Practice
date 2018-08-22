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



bool isBST(struct Node* p, int min, int max)
{

  if(p == NULL) return true;
  if( p -> data < min ||  p -> data > max) return false;


  return isBST(p -> left, min,  p -> data ) && isBST(p -> right, p -> data, max );


}



void PrintIn(struct Node* p)
{

  if(p == NULL) return;
  PrintIn(p -> left);
  cout << char(p -> data) << " ";
  PrintIn(p -> right);



}


struct Node* find(struct Node* p, char c)
{


  if(p == NULL) return NULL;
  else if(c == p -> data) return p; 
  else if(c <= p -> data) return find(p -> left , c);
  else return find( p -> right, c);


}



struct Node* minTest(struct Node* p)
{

  if(p == NULL) return NULL;
  else 
    {
    while(p -> left != NULL)
      {

	p = p -> left;

      }

    }
  return p;

}





struct Node*  InOrdSuc(struct Node* p, char c)
{

  struct Node* current= find(p, c);


  if(current -> right != NULL) return minTest( current->right);  
  else
    {

      struct Node* successor = NULL;
      struct Node* ancestor = p;

      while(ancestor != current)
	{

	  if(current -> data < ancestor -> data)
	    {
	      successor = ancestor;
	      ancestor = ancestor -> left;
	    }
	  else
	    {
	      ancestor = ancestor -> right;
	    }

	}

      return successor;

    }


}

struct Node* InOrder(struct Node* current, struct Node* root)
{




  if(current -> right != NULL) return minTest( current->right);  
  else
    {

      struct Node* successor = NULL;
      struct Node* ancestor = root;

      while(ancestor != current)
	{

	  if(current -> data < ancestor -> data)
	    {
	      successor = ancestor;
	      ancestor = ancestor -> left;
	    }
	  else
	    {
	      ancestor = ancestor -> right;
	    }

	}

      return successor;

    }




}




void PrintMN(struct Node* p)
{


  struct Node* min = minTest(p);

  cout << char(min -> data) << endl;

  struct Node* t = min;

  while(InOrder(t, p) != NULL)
    {

      cout << char(InOrder(t, p) -> data) << endl;

      t = InOrder(t, p);

    }



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


  PrintMN(head);

  //  PrintLev(head);

  //  post(head);

  //  cout <<  isBST(head, INT_MIN, INT_MAX) << endl;


  //  PrintIn(head); 

  //  cout << find(head, 'D') << endl;

  // cout << "Inorder = " << char(InOrdSuc(head, 'A')-> data) << endl;
  // cout << "Inorder = " << InOrdSuc(head, 'K') << endl;


  //  cout << head -> left << endl;


  //  cout << INT_MAX << endl;
  


  return 0;

}
