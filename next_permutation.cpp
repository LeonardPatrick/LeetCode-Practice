
#include <iostream>    
#include <algorithm>   
#include<vector>

using namespace std;

void swap(int& i, int& j)
{
  i = i + j;
  j = i - j;
  i = i - j;
}



void reverse(vector<int>& vec, int k)
  {
  for(int i = k, j = vec.size() - 1; i<j; i++, j--)
    {
      vec[i] = vec[i] + vec[j];
      vec[j] = vec[i] - vec[j];
      vec[i] = vec[i] - vec[j];
    }
  }

void nextPermutation(vector<int>& nums )
{

      int p = nums.size() - 1;

      while(nums[p] < nums[p - 1] && (p - 1) >= 0 )
	{
	  p--;
	}

     







      // m[p - 1] is the first time numbers descend; need to swap this term with next biggest term. Know that m[p] is greater than m[p-1]. Start comparison with m[p + 1]
      //p is already changed to new value
      
      int b = p;

      // works since right subsequence is in descending order

      while(nums[b] > nums[p - 1])
	{
	  b++;
	}

      //      cout << "m[b] = " << m[b - 1] << endl;

      swap(nums[b  - 1], nums[p - 1]);
      reverse(nums, p);

}


int main () {
 

  //  int m[]={1, 5, 8, 4, 7, 6, 5, 3, 1};

  int m[] = {2,1};
  vector<int> test(m, m + sizeof(m)/sizeof(int));


  //start from end

  nextPermutation(test);


   for(int i =0; i < test.size(); i++)
    {
      cout << test[i];
    }

   cout << endl;

  return 0;
}
