#include<iostream>
#include<vector>

using namespace std;


int missing(vector<int> v, int left, int right )
{
  // intialisation of algorithm
  // v[0] creates the offset of indices in ordered array with no duplication
  
  int m, number;
 
  // the following if statement is included under the condition that the first element in the sorted list should always be 0. This takes into account the extreme case that the first element is missing. This is for leetcode.
  if(v[0] == 0)
    {

  while(left <= right)
    { 
      m = left + (right - left)/2; 
      if(v[m] == (v[0]  +  m)) left = m + 1; // everything to the left to and up to index m is ordered; search to the right. 
      else if( v[m] > (v[0] + m) ) right = m - 1; // since index is not lined up it must be that the missing number is to the left.
    }
  number = left; // using left since once this is equal to right (the last value of left or right is equal according to the termination condition of while loop) 

  //extreme cases: last element is missing 
  if(v[v.size() - 1] ==  (v[0] + m))
    {
      number = v[v.size() -1]  + 1; 
    }


    
    }
  else // it must be that zero is missing
    {
      number = 0;
    }

  // return (v[0] + m); assumption that the sorted list starts at a number not equal to zero

  return number;

}



int main()
{


  
  int size = 2;
  vector<int> v(size);

  v[0] = 1;
  v[1] = 0;


  /*
 v[0] = 0;
  v[1] = 1;
  v[2] = 2;
  v[3] = 3;
  v[4] = 4;
  v[5] = 5;
  v[6] = 6;
  v[7] = 7;
  v[8] = 8;
  v[9] = 9;
  */

 int left = 0;
  int right = v.size() - 1;

  cout <<  missing(v, left, right) << endl;



  return 0;


}
