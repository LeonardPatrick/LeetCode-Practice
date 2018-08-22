#include<iostream>

using namespace std;


int marsExploration(string s) {

      int count = 0;
 
  for(int i = 0; i < s.length();i += 3)
    {
      string t = "";

      for(int j = i; (j < i + 3); j++)
	{ 
	  t += s[j];

	}

      if(t != "SOS") 
	{

	  if(t[0] != 'S') count++;
	  if(t[1] != 'O') count++;
	  if(t[2] != 'S') count++;
	}

    }

 return count;

}



int main(){


  string test = "SOSSOT";

  cout <<  marsExploration(test) << endl;


  return 0;
}
