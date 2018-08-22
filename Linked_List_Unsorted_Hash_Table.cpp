#include<iostream>

using namespace std;



struct Node{

  Node* next;
  int data;

};

Node* head = NULL;

void InsertFront(int x)
{

  Node* t = new Node();
  t -> next = NULL;
  t -> data = x;

 
  t -> next = head;
  head = t;

}



void Print(Node* p)
{

  while(p != NULL)
    {
      cout << p -> data << " ";
      p = p -> next;   
    }

}


void PrintS(Node* p)
{
 
  int temp = p -> data; 


  while(p != NULL)
    {

      if((p -> data) == (p->next)-> data)

      cout << p -> data << " ";
      p = p -> next;   
    }


  cout << "Result = "  << p -> data << endl;

}


void DeleteNth(Node* p, int n)
{

  for(int i = 0; i < n - 2; i++)
    {

      p = p -> next;

    }

  struct Node* temp = p -> next;
  p -> next = temp -> next;
  delete temp;

}


void DeleteDup(Node* p)
{

  if(p == NULL) return; // empty list
 
  while(p -> next  != NULL)
    {
           
      if(p-> data != (p->next)-> data)
	{
	   p = p -> next;
	}
      else
	{
     	  struct Node* temp = p -> next;
	  p -> next  = temp -> next;
	  delete temp;
	}
     
    }

}





void PrintPair(Node* curr)
{

 


}


void DeleteDupU(Node* curr)
{

  int a [6]= {0};

  Node* prev = NULL;

  while( curr != NULL)
    {

      a[(curr -> data) - 1]++;

      if(a[(curr -> data) - 1] > 1)
	{
	  struct Node* temp = curr;
	  prev->next = temp -> next;
	  delete temp;

	}




      prev = curr;
      curr = curr -> next;                     
      
    }




}



/*
void Print(Node* p)
{

  while(p != NULL)
    {
      cout << p -> data << " ";
      p = p -> next;   
    }

}
*/


int main()
{

  InsertFront(6);
  InsertFront(5);
  InsertFront(3);
  InsertFront(3);
  InsertFront(1);
  InsertFront(1);
  Print(head);
  cout << endl;
  cout << "head outside =  " << head << endl;
  //  PrintPair(head);

  DeleteDupU(head);



 
    Print(head);
 


  return 0;



}
