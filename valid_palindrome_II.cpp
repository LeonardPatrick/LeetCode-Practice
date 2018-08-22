#include<iostream>
#include<string.h>

using namespace std;


bool isPalindrome(string s, int low, int high)
{

  //  int low  = 0;
  //int high = s.length() - 1;

  while (low < high)
    {
      if (s[low] != s[high])
	return false;
      low++;
      high--;
    }
  return true;
}
 
// This method returns -1 if it is not possible to make string
// a palindrome. It returns -2 if string is already a palindrome.
// Otherwise it returns index of character whose removal can
// make the whole string palindrome.
bool validPalindrome(string str)
{




  int result;
  //  Initialize low and right by both the ends of the string
  int low = 0, high = str.length() - 1;

  if(isPalindrome(str, low, high)) return true;
 
  //  loop untill low and high cross each other
  while (low < high)
    {
      // If both characters are equal then move both pointer
      // towards end


      if (str[low] == str[high])
        {
	  low++;
	  high--;
        }
      else
        {

            /*  If removing str[low] makes the whole string palindrome.
                We basically check if substring str[low+1..high] is
                palindrome or not. */
	  if (isPalindrome(str, low + 1,  high))
	    {
	    result = low;
	    break;
            }
 
	  /*  If removing str[high] makes the whole string palindrome
                We basically check if substring str[low+1..high] is
                palindrome or not. */
	  if (isPalindrome(str, low, high - 1))
	    {
	    result =  high;
	    break;
	    }
	  else{
	  result =  -1;
	  break;
	  }
        }
    }
 


  //  We reach here when complete string will be palindrome
  //  if complete string is palindrome then return mid character



  if(result == -1)
    {
      return 0;
    }

  return 1;
}


// Driver code to test above methods
int main()
{
  string str = "abcddcba";

  cout << validPalindrome(str) << endl;

  return 0;
}
