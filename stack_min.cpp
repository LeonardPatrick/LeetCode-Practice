#include<iostream>

using namespace std;

struct node{

  struct node* next;
  int val;
  struct node* next_min;

};

  struct node* minN;

  void push(struct node** p, int n)
{

  struct node* t = (struct node*)malloc(sizeof(struct node));
  t-> next = NULL;
  t -> val =n;


  if((*p) == NULL)
    {

      (*p) = t;
      t -> next_min = NULL;
      minN = t;
    }

  else
    {
      t -> next = (*p);
      (*p) = t;

  if(minN ->val > n)
    {

      t -> next_min = minN;
       minN = t;
    }
    }

}




void pop(struct node** p)
{

  if((*p) == NULL) return;

  if((*p) -> val == minN -> val)
    {
      minN = (*p) -> next_min;
    }


  struct node* t = (*p);
  (*p) = (*p) -> next;
  free(t);


}




int top(struct node* p)
{

  if(p == NULL) {cout << "empty stack"<< endl; return -1;}

  return p -> val;

}


int getMin(struct node* p)
{

  if(p == NULL) {cout << "empty stack"<< endl; return -1;}

 return minN -> val;


}


int main()
{

  struct node* head = NULL;

  push(&head, 9);
  push(&head, 8);
  push(&head, 6);
  push(&head, 1);
  pop(&head);
  cout << top(head) << endl;
  cout << getMin(head) << endl;

  return 0;

}
