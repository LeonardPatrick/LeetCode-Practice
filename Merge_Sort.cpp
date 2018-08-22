#include<iostream>

using namespace std;

void Merge (int L[], int R[])
{

  //  int nL = sizeof(L)/sizeof(int);
  // int nR = sizeof(R)/sizeof(int);
  int i= 0, j = 0;


}




void Merge(int* A, int* L, int* R, int nL, int nR)
{



 int i = 0, j = 0, k = 0;

  while(i < nL && j < nR)
    {
      if(L[i] <= R[j] )
	{
	  A[k] = L[i];
	  i++;
	}
      else
	{
	  A[k] = R[j];
	  j++;
	}
	  k++;
    }

  while(i < nL)
    {

      A[k] = L[i];
      i++;
      k++;

    }


  while(j < nR)
    {

      A[k] = R[j];
      j++;
      k++;

    }





}


void MergeSort(int* A, int n)
{

  if(n < 2) return;
  int mid, nL, nR, *L, *R; 

    mid = n/2;

    nL = mid;
    nR = n - mid;


    L = new int[nL];
    R = new int[nR];

    for(int i = 0; i < mid; i++) L[i] = A[i];
    for(int j = mid; j < n; j++) R[j - mid] = A[j];


    MergeSort(L, nL);
    MergeSort(R, nR);

    Merge( A,  L,  R,  nL,  nR);

    delete [] L;
    delete [] R;



}



int main()
{


int A [] = {2, 4, 1, 6, 8, 5, 3, 7};

int L []  = {1, 2, 4, 6};

int R [] = {3, 5, 7, 8};




 int nL = sizeof(L)/sizeof(int);
 int nR = sizeof(R)/sizeof(int);


  for(int i = 0; i < sizeof(A)/sizeof(int); i++) cout << A[i] << " ";

  cout << endl;

   Merge(A, L, R, nL, nR);


  for(int i = 0; i < sizeof(A)/sizeof(int); i++) cout << A[i] << " ";


  return 0;

}
