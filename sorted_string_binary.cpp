#include<iostream>
#include<vector>

using namespace std;


// to return the index of where the name is

int binary(vector<string> v, string test )
{

  int left = 0, right = v.size() - 1;

  int m, result;

  while(left <= right)
    {

      m = left + (right - left)/2;


      if(v[m] ==  test)
	{
	   result =  m;
	   break;
	}
      else if(v[m] < test)
	{

	  left = m + 1;

	}

      else if(v[m] > test)
	{


	  right = m - 1;

	}


    }



  return result;




}




int main()
{



 

  string a[] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim", "Stamey, Marty", "Rose, Geri", "Taylor, Terri", "Johnson, Jill", "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean", "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", "Javens, Renee", "Harrison, Rose", "Setzer, Cathy","Pike, Gordon", "Holland, Beth" }; 

  vector<string> v(a, a + sizeof(a)/sizeof(string));



  string temp;
  
    for(int i = 1; i < v.size(); i++ )
      {
	int j = i;

    while(v[j] < v[j - 1])
      { 
     temp = v[j - 1];
     v[j - 1] = v[j];
     v[j] = temp;
     j--;

      }

      }


    for(int i = 0; i < v.size(); i++)
      {

	cout << v[i] << endl; 

      }



    //implement binary search to see if a name is present in list

    cout << "Last index = " << v.size() - 1 << endl;
    cout << binary(v, "Allison, Jeff") << endl;









  return 0;


}
