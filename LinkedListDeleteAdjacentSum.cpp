/* Program to remove duplicates in an unsorted
   linked list */
#include<iostream>
using namespace std;


 
/* A linked list node */
struct Node
{
  int data;
  struct Node *next;
};
 
// Utility function to create a new Node
struct Node *newNode(int data)
{
  Node *temp = new Node;
  temp->data = data;
  temp->next = NULL;
  return temp;
}


void removeDuplicates(struct Node *start)
{

  struct Node *curr, *prev, *dup;

  curr = start;
  prev = 0;

  int arr[100] = {0};

  while(curr != NULL)
    {

      if(arr[curr -> data] >= 1)
	{

	  // arr[curr -> data]--;
	  dup = curr;
	  curr = prev;
	  curr -> next = dup -> next;
	  delete dup;
	  curr = curr -> next;

	}

      else
	{
	  arr[curr -> data]++;
	  prev = curr;
	  curr  = curr -> next;
	}



    }

} 


/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
  while (node != NULL)
    {
      printf("%d ", node->data);
      node = node->next;
    }
}
 

void removeSum(struct Node* p, int sum)
{


  struct Node* curr = p;
  struct Node* prev = NULL;

  while(curr -> next -> next!= NULL)
    {

  if(curr -> data + curr -> next -> data == sum)
    {
      struct Node* sum1 = curr;
      struct Node* sum2 = curr -> next;
      curr = prev;
      curr -> next = sum2 -> next;
      delete sum1;
      delete sum2;
    }
  else
    {
      prev = curr;
      curr = curr -> next;
    }

    }

}


/* Druver program to test above function */
int main()
{
  /* The constructed linked list is:
     10->12->11->11->12->11->10*/
  struct Node *start = newNode(9);
 
  
 start->next = newNode(12);
  start->next->next = newNode(11);
  start->next->next->next = newNode(11);
  start->next->next->next->next = newNode(11);
    start->next->next->next->next->next =
      newNode(11);
    start->next->next->next->next->next->next =
      newNode(10);

    //    start->next->next->next->next->next->next-> next = newNode(10);
 
    printf("Linked list before removing duplicates ");
    printList(start);
  
    //    removeDuplicates(start);
    removeSum(start, 22);
   printf("\nLinked list after removing duplicates ");
   printList(start);
 
    return 0;
}


