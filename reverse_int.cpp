#include<iostream>

using namespace std;

int reverse(int x)
{

  //assume x is a positive int

  int rev = 0;

  while(x != 0)
    {

      rev = rev*10 + x%10;
      x /= 10 ;

    }  



  return rev;



}


int main()
{



  cout << reverse(16548888) << endl;





  return 0;

}
