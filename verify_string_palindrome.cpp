#include<iostream>
#include<string>

using namespace std;




string reverse(string s)
  {


    double len = s.length();
    string temp = s;
    for(int i  = 0; i < len; i++)
      {

	s[i] = temp[len - 1 - i];

      }

     return s; 

  }






bool isPalindrome(string s)
{

  if(s == "") return 1;

  string temp = ""; // empty string

  for(int i  = 0; i < s.length(); i++)
    {

     
      while(isalnum(s[i]))
	{
	  temp +=tolower( s[i]);   // remove spaces and characters
          i++;
	}

    }


  /*
  for(int i = 0; i < temp.length(); i++)
    {
      temp[i] = tolower(temp[i]);  
    }
  */


  string p = reverse(temp);


  if(temp == p)
    {

      return 1;

    }
  else
    {

      return 0;


    }


}






int main()
{

    string test = "As I pee, sir, I see Pisa!";
  // string test;
  // cin >> test;

  string other = "the";
  string temp;


  for(int i  = 0; i < test.length(); i++)
    {

      cout << " i top = " <<  i << endl;
     
      while(isalnum(test[i]))
	{
	  temp += tolower(test[i]);   // remove spaces and characters
	  cout << "temp = " << temp << endl;
          i++;
	  cout << "i in loop = " << i << endl;
	}

      cout << "i bottom = " << i << endl;


    }




  if(other == test) cout <<  "H" << endl;

  cout << isPalindrome(test) << endl;



  return 0;

}

