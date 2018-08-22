#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

/*

// Uses insertion sort
string al_order(string s)
{

  int j;
  char temp;

  for(int i = 1; i < s.length(); i++)
    {
     j = i;
     
       while(s[j] < s[j-1])
    {
      temp = s[j-1];
      s[j-1] = s[j];
      s[j] = temp;
      j--;
    }

    }

  return s;
}


bool isAnagram(string s, string t)
{

  if(al_order(s) == al_order(t))
    {

      return true;
    }
  else
    {

      return false;
    }

}
*/





// Uses bulit-in sort function

bool isAnagram(string s, string t)
{

  sort(s.begin(),s.end());
  sort(t.begin(), t.end());
         
  if( s == t )
    {

      return true;
    }
  else
    {

      return false;
    }

}

int main()
{

  string a = "rat";

  string b = "car";

  sort(b.begin(), b.end());

  cout << b << endl;

  // cout << isAnagram(a,b) << endl;












  return 0;

}
