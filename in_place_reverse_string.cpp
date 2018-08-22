#include<iostream>
#include<string.h>



using namespace std;

int main()
{

  string s = "country";

  for(int i = 0, j  = s.length() - 1; i < j ; i++, j--)
    {

      s[i] = s[i] + s[j];
      s[j] = s[i] - s[j];
      s[i] = s[i] - s[j];

    }

 
  cout << s << endl;



  return 0;

}

