#include<iostream>

using namespace std;

int BinM(int a[], int size)
{

  int start = 0;
  int end = size  - 1;
  int mid = start + (end - start)/2;

  while(start < end)
    {

      if(a[mid] - a[start] != mid - start)
	{
	  if( (mid - start == 1) && (a[mid] - a[start] > 1) ) return a[mid] - 1;

	  end = mid;
	}
      else if(a[end]- a[mid] != end - mid)
	{

	  if(end - mid == 1 && a[end] - a[mid] > 1)  return a[mid] + 1;

	  start = mid;
	}
      else
	{
	  return -1;
	}

      mid = start + (end - start)/2;


    }



  return -1;



}

int main()
{

  int arr[] = {5,6,7,8,9,11,12};
  int length = sizeof(arr)/sizeof(int);

  cout << BinM(arr, length) << endl;


  return 0;

}
