#include<iostream>
#include<vector>
using namespace std;



int binary(vector<int> v, int left, int right)
{


  int m = left + (right - left)/2;

   if(left >= right)
    {      
      return  (v[0] +  left);
    }
   else if( v[m] == (v[0] +  m))   // this element and all elements to the left are sorted; search to the right of m.
    {

     left = m + 1;
     return binary(v, left, right);      
    }
 
  else if( v[m] > (v[0] +  m) ) // this element and all elements to the right are unsorted by the missing element; search to the left of m.
    {
      // left stays the same
      
      right = m - 1; 
      return  binary(v,left, right);
    }
  

     return -1;  

}



int main()
{

  vector<int> v(10);

  v[0] = 6;
  v[1] = 7;
  v[2] = 8;
  v[3] = 10;
  v[4] = 11;
  v[5] = 12;
  v[6] = 13;
  v[7] = 14;
  v[8] = 15;
  v[9] = 16;

  int left = 0;
  int right = v.size() - 1;



  cout <<  binary(v,left, right) << endl;



  return 0;

}
