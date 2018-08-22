#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

  int a[] = {2,5,4,5,6,8,9,2,5,4,7,7,3};

  vector<int> nums(a, a + sizeof(a)/sizeof(int));

  sort(nums.begin(), nums.end());



  for(int i = 0; i < nums.size();i++)
      {

	cout << nums[i];

      }


    cout << endl;

  vector<int> ct;
  int temp = nums[0];
  int c = 0;
  vector<int> v;
  v.push_back(nums[0]);

  cout << "nums szie = " << nums.size() << endl;


  int i =0;
      
  while(i <  nums.size())
    {

	

	while( nums[i] == temp  )
	  {

	    c++;
	    i++;

	  }

cout << "i AFTER while loop = " << i << endl;
	cout << "nums" << nums[i] << endl;
	v.push_back(nums[i]);
	ct.push_back(c);
	c = 0;
	temp = nums[i];
      

    }

    for(int i = 0; i < v.size(); i++)
      {

	cout <<v[i];

      }

    cout << endl;


    for(int i = 0; i < ct.size(); i++)
      {

	cout << ct[i];

      }


    cout << endl;

	/*
sort(nums.begin(),nums.end());

 vector<int> val;
 vector<int> count;
 

int n=nums.size();


for(int i=0;i<nums.size();i++)
  {
    val.push_back(nums[i]);
    int c=1;
    while((i+1)<n && nums[i+1]==nums[i])
      {
	c++;
	i++;
      }
    count.push_back(c);
  }

	*/





 return 0;


}
