#include<iostream>

using namespace std;


struct Node{

  int data;
  Node* next;

};




void insertHeadA(Node* p, int x)
{

  Node* t = new Node();
  //  struct Node* t = (struct Node*)malloc(sizeof(struct Node));

  t -> data = x;
  //  t -> next = NULL;
  
  t -> next = p;
  p = t;


}




void insertHead(Node** p, int x)
{

  Node* t = new Node();
  //  struct Node* t = (struct Node*)malloc(sizeof(struct Node));

  t -> data = x;
  //  t -> next = NULL;
  
  t -> next = *p;
  *p = t;


}

void insertNth(Node** p, int x, int n)
{

  Node* t = new Node();
  t -> data = x;
  t -> next = NULL;

  for(int i = 0; i < n - 2;  i++) (*p) = (*p)->next;
 

  cout << "p  data = " << (*p)-> data << endl; 
  struct Node* temp = (*p) -> next;
  (*p) = t;
  t -> next = temp;



}



void PrintA(Node* p)
{

  while(p != NULL)
    {
      cout << (p) -> data << " ";
      (p) = (p) -> next;
    }

  cout << endl;

}





void InsertNthTest(Node **head, int x, int position) {
  if ((!head) || (position < 0)) return;



  struct Node* h = *head;

  struct Node *p = (struct Node *) malloc(sizeof(struct Node));
  if (!p) return ;

  p->data = x;

  p->next = NULL;


  if(position == 1)
    {
      p -> next = *head;
      *head = p;
      return;
    }



  for(int i = 0; i < position - 2;i++) 
    {

      h = h-> next;
      if(h -> next ==  NULL) break; 
    }



  struct Node* temp = h -> next;
  p -> next = temp;
  h->next = p;


 
}





void Print(Node** p ){
  

    struct Node* h = *p;

  while(h != NULL)
    {
      cout << h -> data << " ";
      h = h -> next;
    }

  cout << endl;
}




void deleteNth(Node** p, int n)
{

  struct Node* h = *p;

  if(n == 1)
    {
      *p = h -> next;
      delete h;
    }


  for(int i  = 0; i < n - 2; i++)
    {
      h = h -> next;
      if(h -> next == NULL) break;
    }

  struct Node* temp = h -> next;
  h -> next = temp -> next;
  delete temp;



}



void deleteAll(Node** p)
{

  while(*p != NULL)
    {

      struct Node* t = *p; 

      *p = (*p) -> next;

      delete t;

    }



}




int main()
{

  struct Node* head = NULL;
 insertHead(&head, 7);
 
  insertHead(&head, 1);
 
  insertHead(&head, 5);
 
  insertHead(&head, 2);
 
  insertHead(&head, 6);
  Print(&head); 
  deleteNth(&head, 4);
 Print(&head); 
  InsertNthTest(&head, 10, 7);
  Print(&head); 
  deleteAll(&head);
  cout << head << endl;
  Print(&head);


  return 0;

}
