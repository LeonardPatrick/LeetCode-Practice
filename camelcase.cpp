#include<iostream>

using namespace std;


int camelcase(string s){

  int count = 0;

  for(int i = 0; i < s.length(); i++)
    {
      while(islower(s[i]))
	{
	  i++;

	}    

      count++;
    }

  return count;

  }


int main(){



  string test = "saveChangesInTheEditor";

  cout << camelcase(test) << endl;


  return 0;
}
