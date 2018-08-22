#include<iostream>
#include<stack>

using namespace std;




bool arePair(char o, char c)
{


  if(o == '(' && c == ')') return true;
  else  if(o == '[' && c == ']') return true;
  else  if(o == '{' && c == '}') return true;
 
  return false;
}


bool par(string s)
{

  stack<char> c;

  for(int i  = 0; i < s.length(); i++)
    {

      if(s[i] == '['|| s[i] == '{' || s[i] == '(' )
	{
	  c.push(s[i]);
	}
      else if( s[i] == ']'|| s[i] == '}' || s[i] == ')' )
	{

	  if(c.empty() || !(arePair(c.top(), s[i])) ) return false;
	  else c.pop();

	}

    }

	    return c.empty();


    }

int main()
{


  string s = "[())()]" ;

  cout << par(s) << endl;



  return 0;

}
