#include<iostream>
#include<stack>
#include<queue>
using namespace std;



stack<int> a;
stack<int> b;

void pushQ(int x)
{

  a.push(x);

}


bool emptyQ()
{

  return a.empty() && b.empty();

}


int popQ()
{

  if(b.empty())
    {
      while(!a.empty())
	{
	  b.push(a.top());
	  a.pop();
	}
    }


  int t = b.top();
  b.pop();
  return t;

}

int peekQ()
{

  if(b.empty())
    {

      while(!a.empty())
	{

	  b.push(a.top());
	    a.pop();
	}

    }

      return b.top();

}



int main()
{


  

  
}






