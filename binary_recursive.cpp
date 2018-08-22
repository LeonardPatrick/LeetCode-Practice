#include<iostream>
#include<vector>
using namespace std;



int binary(vector<int> v, int left, int right, int test)
{

  int m  = left + (right - left)/2;


  if(test == v[m])
    {
      return m;      
    }
 
  else if(m == 0 || m == v.size() - 1 )  // if test int does not equal the values stored in v[0] or v[v.size() - 1] then it must be that the integer is not present in sorted list
    {

      return -1;

    }
 else if(test < v[m])
    {
      // left stays the same

      right = m - 1; 
      return  binary(v,left, right, test);
    }
  
  else if(test > v[m])
    {      
      // right stays the same

      left = m + 1;
      return  binary(v,left, right, test);
    }
  else
  { 

   return 0;

  }




}



int main()
{


  // Do both recursive and iteratively. Do for int array and also for string.
  // vector might be better to store ints

  vector<int> v(8);

  v[0] = 1;
  v[1] = 4;
  v[2] = 6;
  v[3] = 8;
  v[4] = 9;
  v[5] = 10;
  v[6] = 11;
  v[7] = 13;

  int left = 0;
  int right = v.size() - 1;

  int test = -10;

  cout <<  binary(v,left, right, test) << endl;



  return 0;

}
