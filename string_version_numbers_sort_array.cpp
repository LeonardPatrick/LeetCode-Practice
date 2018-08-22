#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//compare two strings of whole numbers



bool sortFunction (string i,string j) 
{ 
  int n=i.length();
  int m=j.length();
  if(n==m)
    return (i<j);
    
  return n<m;   
}



int compareVersion(string s1, string s2)
{ 


string s1New, s2New;

//int m, result;
//int n = 0;
 int result; 

 for(int i  = 0, j = 0; (i < s1.length()) || (j < s2.length()); i++, j++)
    {




      if(i >= s1.length()) s1New = "0";  // if length of string is exceeded, we keep adding 0s. For example, 12.0.6.8.9 could be become 12.0.6.8.9.0.0.0.0.0.0.0
      else  s1New = "";

      while(s1[i] != '.' && i < s1.length())
    {
      s1New += s1[i];             // creating a new string through concatenation
      i++;
    }


   
      if(j >= s2.length()) s2New = "0";
      else s2New = "";
    
      while((j < s2.length()) && (s2[j] != '.'))
    {
      s2New += s2[j];
      j++;     
    }


      
      // conversion from string to double; resolves leading zero issue
      double s1d = stod(s1New);
      double s2d = stod(s2New);


      

      // compareVersion is now in the form of boolean

      if((i >= s1.length() && j >= s2.length()) && ( s1d == s2d) ) // reach end of longer string; for shorter string substituted in zeros 
	{

	  result  = 0; // strings are equal

	}     
    else if(s1d == s2d)
      {
	continue;   // if digits between certain '.' are equal, continue comparison algorithm.
      }
    else if(s1d < s2d)
      {
	
	result  = 1;
	break;

      }
    else if(s1d > s2d)
      {

	result = 0;
	break;
      }
  





    }
 
 
      


        return result;


}


int main()
{



  //   string s1 = "1.6 ";
  // string s2 = "1.06.";



  //      string s1 = "19.8.3.17.5.01.0.0.4.0.0.0.0.0.0.0.0.0.0.0.0.0.00.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.000000.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0000000";
  //   string s2 = "19.8.3.17.5.01.0.0.4.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0000.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.000000";



  // Problems: leading zeros and extra zeros comparing 0.0 to be 0 should yield the same result; issue right now relates to conditional part of for loop.





  //  cout <<  compareVersion(s1, s2) << endl;

  // leading zeros is an issue

  
 

  vector<string> v(5); 

  // v[0] =   "9.8.17.5295";
  //  v[1] =  "25.3.6.1"; 
  //  v[2] =  "9.13.0.0"; 
  //  v[3] =  "12.3.9.1017";
  //  v[4] = "19.8.3.17.5.01.0.0.4.0.0.0.0.0.0.0.0.0.0.0.0.0.00.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.000000.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0000000";
  //  v[5] =  "19.8.3.17.5.01.0.0.4.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0000.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.000000";



    v[0]= "1.1.2";
    v[1] =  "1.0.0";
    v[2] =  "1.3.3";
    v[3] =  "1.0.12";
    v[4] =  "1.0.2";


      sort( v.begin(), v.end(), compareVersion);

    for(int i = 0; i < v.size(); i++)
      {

	cout << v[i] << ", ";

      }
  

    cout << "  " << endl;

 return 0;

}







//TURN COMPARISONN FUNCTION INTO BOOLEAN BY USING MYFUNCTION

      /* 
// For ordering in sort function
  if(s1New == s2New)
    {
      continue;
    }
  else if(myfunction(s1New, s2New))
    {
      result  = 1;
      break;
    }
  else 
    {

      result = 0;
      break;
    }

      */


      // return result;
    
