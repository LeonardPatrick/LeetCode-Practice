#include<iostream>
#include<vector>
using namespace std;

int lonely(vector<int> v)
{

  int result = v[0];

  for(int i = 1; i < v.size(); i++)
    {

      result ^= v[i];


    }


  return result;


}


int main()
{

  int a [] = {9, 1, 2, 3, 2,3, 9, 1, 7, 7, 7};
  vector<int> v(a, a + (sizeof(a)/sizeof(int)));


  cout << lonely(v) << endl;




  return 0;

}
