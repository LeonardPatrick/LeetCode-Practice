#include<iostream>

using namespace std;


string super_reduced_string(string s){

    

  while(s.length() != 0)
    {
      char temp = s[0]; // initialisation
      string newS = "";
      int count = 0;
 

      for(int i = 0; i < s.length();)
	{

	  while(s[i] == temp)
	    {
	      count++;
	      i++;         
	    }

	  if(count%2 == 1) newS += temp;
	  count = 0;
	  temp = s[i];    
                     
    }

      if(newS.length() == s.length()) return newS;
      s = newS;
      newS = "";
    }


  return "Empty String";


}


int main(){


    string test =  "aaabccddd";

  //  string test = "baab";

  cout <<  super_reduced_string(test) << endl;;

  return 0;
}
