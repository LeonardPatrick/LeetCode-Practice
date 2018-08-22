#include<iostream>
#include<vector>


using namespace std;


void reverse(string& s)
{

  for(int i = 0, j = s.length() - 1; i < j; i++, j--)
    {
      s[i] = s[i] + s[j];
      s[j] = s[i] - s[j];
      s[i] = s[i] - s[j];
    }
}



void revSub(string& n, int b, int e)
{


  for(int i = b, j = e; i < j; i++, j--)
    {

      n[i] = n[i] + n[j];
      n[j] = n[i] - n[j];
      n[i] = n[i] - n[j];


    }



}

 

void reverseWords(string& m)
{

  reverse(m);

  for(int i = 0; i < m.length(); i++)
    {

      int j = i;
      while(m[i] != ' ' && i < m.length())
	{
	  i++;
	}

        revSub(m,j, i - 1);    

    }


  for(int i = 0; i < m.length(); i++)
    {

      int j = i;



      while(m[i] == ' ')
	{
          i++;

	}


      if(i - j > 1){ m.erase(j + 1 , i - j  - 1); i = i - j - 1;} //erases extra white spaces and resets index i as length of string m has now changed


    }

  // removes white spaces at both ends
  if(m[0] == ' ') m.erase(0,1);
  if(m[m.length() - 1] == ' ') m.erase(m.length() - 1,1);


}





int main()
{

  //      string t =  "the       sky is blue ";
  //  cout << t.erase(t.length() - 1,1) << endl;
  //   string t = "a";
  //  string t  = "    ";
  string t = "   a   ";
  cout << "length of t = " << t.length() << endl;
   reverseWords(t);
   cout << t << endl;
    // revSub(t, 0, 2);

   cout << "length of t = " << t.length() << endl;


  /*
  cout << "length  of t = " << t.length() << endl;

  for(int i = 0; i < t.length(); i++)
    {

      if(!isalnum(t[i])) t.erase(i,1);

    }


  cout << "length  of t = " << t.length() << endl;
  cout << t << endl;

  */
  return 0;


}
