#include<iostream>
#include<vector>

using namespace std;


int binary(vector<int> v, int left, int right, int test )
{

  int m;
 

  while(left <=  right)
    { 
      m = left + (right - left)/2;


       if(test == v[m]) return m;
       // else if( m == 0 || m == v.size() - 1)  return -1;
       else if( test > v[m]) left = m + 1;
       else if(test <  v[m]) right = m - 1;


    }




  return v.size();

}



int main()
{

  int test = 11;


  int size = 8;
  vector<int> v(size);

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

  cout <<  binary(v, left, right, test) << endl;



  return 0;


}
