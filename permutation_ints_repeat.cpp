#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

//vector<int> t;   // to store resulting permutation

vector<vector<int> > ans;

void print2Dvec(vector<vector<int> > vv)
{

  for(int i = 0; i < vv.size(); i++)
    {
      for(int j = 0; j < vv[i].size(); j++)
	{
	  cout << vv[i][j];
	}
      cout << endl;

    }
}

/*
vector<int> nums_count(vector<int> nums)  // string passed by reference in order to alter it without returning new string
{


  int ct = 0;
  int temp = nums[0]; // initialisation 
  //  vector<int> t;   // t stores the new string with no duplicates
  int i = 0;
  vector<int> c; // vector to store occurrecnes of numbers  

  sort(nums.begin(), nums.end());   // sorting int vector to allow a single pass of string in counting letters

  if(nums.size() == 0)
    {
      cout << "vector is empty" << endl;
    }
  else
    {
      while(i < nums.size())
	{
       	  t.push_back(nums[i]); // creating new string with no duplicates

	  while(nums[i] ==  temp)
	    {
	      ct++;
	      i++;
	    }
    
	  c.push_back(ct);

	  ct = 0; // reset for counting of new letter;
	  temp = nums[i]; // temp is now reset to new letter

	}
 
    }


  return c;
  
}
*/

void recur(vector<int> countn, vector<int> nums,  vector<int>& cur,int dep,int n)
{
  if(dep==n)
    {
      ans.push_back(cur);
      return;
    }
  for(int i=0; i < nums.size(); i++)
    {
      
      if(countn[i]>0)
	{
	  countn[i]--;
	  cur[dep]=nums[i];
	  recur(countn,nums,cur,dep+1,n);
	  countn[i]++;
	}
    }
}



vector<vector<int> > permuteUnique(vector<int>& nums) 
{

  int n = nums.size(); // depth of recursion
  vector<int> cur(nums.size());
  //  vector<int> d =  nums_count(nums);  // count the number of occurences of each letter
 

  int ct = 0;
  int temp = nums[0]; // initialisation 
    vector<int> t;   // t stores the new string with no duplicates
  int i = 0;
  vector<int> c; // vector to store occurrecnes of numbers  

  sort(nums.begin(), nums.end());   // sorting int vector to allow a single pass of string in counting letters

  if(nums.size() == 0)
    {
      cout << "vector is empty" << endl;
    }
  else
    {
      while(i < nums.size())
	{
       	  t.push_back(nums[i]); // creating new string with no duplicates

	  while(nums[i] ==  temp)
	    {
	      ct++;
	      i++;
	    }
    
	  c.push_back(ct);

	  ct = 0; // reset for counting of new letter;
	  temp = nums[i]; // temp is now reset to new letter

	}
 
    }



  recur(c, t, cur, 0, n); // t instead of nums since t now represents the reduced form of the vector where each number appears only once



  return ans;




}



int main()
{
  // change the count and the starting position.

 

  
  int a[] = {-1, -1, 0};

  vector<int> test(a, a + sizeof(a)/sizeof(int)); 

    vector<vector<int> > final = permuteUnique(test);

   print2Dvec(final);



  return 0;

}
