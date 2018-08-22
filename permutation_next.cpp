#include<iostream>
#include<vector>
using namespace std;

/*
void nextPermutation(vector<int>& nums) 
{



        
}
*/

 

void printVec(vector<int> v)
{

  for(int i = 0; i < v.size(); i++)
    {
      cout << v[i];
    }
  cout << endl;

}


void swap(vector<int>& nums, int i, int j)
{ 


  int temp;
  temp = nums[i];
  nums[i] = nums[j];
  nums[j] = temp;
}



void permute(vector<int>& nums, int k)
{

  if(k == nums.size() - 1)
    {

      printVec(nums);

    }     
  else
    {
      for(int i = k; i < nums.size(); i++)
	{

	  
	  swap(nums, k, i);
	  permute(nums, k + 1);
	  swap(nums, k , i);
	}
    }




}



int main()
{

  int a [] = {1,2,3};
  vector<int> v(a, a + sizeof(a)/sizeof(int));
  permute(v, 0);

 




  return 0;


}
