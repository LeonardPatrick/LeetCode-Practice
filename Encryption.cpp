#include<iostream>

using namespace std;

string caesarCipher(string s, int k) {
   
  for(int i = 0; i < s.length(); i++)
    {

      while(isalpha(s[i]))
	{

	  if(islower(s[i]))
	    {
	      s[i] = (s[i] - 'a' + k)%26 + 'a'; 
 	    }
	  else if(isupper(s[i]))
	    {

	      s[i] = (s[i] - 'A' + k)%26 + 'A'; 
	    }
	 

	  i++;
	}
	
    }
	
      return s;

}

int main() {


  string test = "Hello_World!";






 




      cout <<  caesarCipher(test, 4) << endl;
 

  return 0;

}
