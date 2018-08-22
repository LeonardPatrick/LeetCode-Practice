#include<iostream>
#include<queue>


using namespace std;


/*
struct Node
{
  char data;
  Node* left;
  Node* right;
};
*/



class Node
{

public:
  char data;
  Node* left;
  Node* right;
};



/*
// Breadth first
void LevelOrder(Node* root)
{

  if(root == NULL) return;

  queue<Node*> Q;

  Q.push(root);

  while(!Q.empty())
    {
      Node* current = Q.front();
      cout << current-> data << " ";


      if(current -> left != NULL) Q.push(current -> left);
      if(current -> right != NULL) Q.push(current -> right);
      Q.pop();

    }


  cout << (*root).data << endl;



}
*/


Node* GetNewNode(int x)
{

  Node* newNode  = new Node();
  (*newNode).data = x;
  newNode -> left = NULL;
  newNode -> right = NULL;

  return newNode; 

}


Node* Insert(Node* root, int x)
{

  if(root == NULL)
    {
      root = GetNewNode(x);

    }


  else if(x <= root -> data)
    {
      root -> left = Insert(root->left, x);
    }
  else
    {
      root -> right = Insert(root -> right, x);
    }

  return root;

}



void Preorder( Node* root)
{

  if(root == NULL) return;

  cout << (*root).data << " ";
  Preorder(root -> left);
  Preorder(root -> right);

}


void Inorder(Node* root)
{

  if(root == NULL) return;
  Inorder(root -> left);
  cout << root -> data << " ";
  Inorder(root -> right); 


}

void Postorder(Node* root)
{

  if(root == NULL) return;
  Postorder(root -> left);
  Postorder(root -> right);
  cout << root -> data << " ";



}


/*
isBinarySearchTree(Node* root)
{

  if(root = NULL) return true;
  if(data in left is less than or equal to root)





  if((root->left).data <= root -> data && (root -> right).data > roo)


}
*/


int main()
{


  int a = 10;
  cout << &a << endl;
 
  Node* root = NULL;
 
 root = Insert(root,'M'); root = Insert(root,'B');
  root = Insert(root,'Q'); root = Insert(root,'Z'); 
  root = Insert(root,'A'); root = Insert(root,'C');
  //Print Nodes in Level Order. 
  // LevelOrder(root);

  // Print Node in Preorder
  // Preorder(root);


  //Print Node in Inorder
  // Inorder(root);

  //Print Node in postorder;
  Postorder(root);
  return 0;

}
