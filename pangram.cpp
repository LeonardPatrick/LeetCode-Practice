#include<iostream>

using namespace std;


string isPangram(string s){

  int a[26] = {0};
  int sum = 0;

  for(int i = 0; i < s.length(); i++)
    {

      while(isalpha(s[i]))
	{
	  s[i] = tolower(s[i]);

	  int k = s[i] -  'a';

	  if(a[k] == 0) a[k] = 1;

	  i++;
	}

    }


  for(int j = 0; j < sizeof(a)/sizeof(int); j++)
    {
      sum += a[j];
    }





  if(sum == 26) return "pangram";

  return "not pangram";

}


int main(){


  string test = "We promptly judged antique ivory buckles for the next prize";

  //  cout << isPangram(test) << endl;


  int a[26] = {0};
  int sum = 0;

  string s;
    
  getline(cin, s);
    
    
  for(int i = 0; i < s.length(); i++)
    {

      while(isalpha(s[i]))
        {

          s[i] = tolower(s[i]);

          int k = s[i] -  'a';	

          if(a[k] == 0) a[k] = 1;

          i++;
        }

    }


  for(int j = 0; j < sizeof(a)/sizeof(int); j++)
    {
      sum += a[j];
    }


  if(sum == 26) cout << "pangram" << endl;

  else cout << "not pangram" << endl;

    




  return 0;
}
