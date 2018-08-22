#include<iostream>

using namespace std;


string validIPAddress6(string IP) {

  int h = 0;

  for(int i = 0; i < IP.length(); i++)
    {
      string r = "";

      if(IP[0] == '0' ) return "Neither"; // first term is a leading zero

      while(IP[i] != ':' && i < IP.length())
	{
	  if(!isxdigit(IP[i])) return "Neither";
	  r += IP[i];
	  i++;
	}

      if(IP[i] == ':') h++;

      if(r == "") return "Neither";
      else if(r.length() > 4) return "Neither";

     
    }



  if( h  != 7) return "Neither";

  return "IPv6";

}


string validIPAddress4(string IP) {

  


  int k = 0; // counter for number of decimal places

  for(int i  = 0; i < IP.length(); i++)
    { 
      string t = "";

        
      while(IP[i] != '.' && i < IP.length())
	{
	  if(!isdigit(IP[i])) return "Neither";
	  t += IP[i];
	  i++;
	}
  
     

      if(IP[i] == '.') k++;

      if(IP[IP.length() - 1] == '.') return "Neither";
      else if(t.length() >  1 && t[0] == '0') return "Neither";
      else if(t.length() > 3 || t == "") return "Neither";
      else if( stod(t) > 255) return "Neither";


    }



  if( k != 3) return "Neither"; // format is not correct if there are not three dots

  return "IPv4";
}



string validIPAddress(string IP){

  int p = 0;
 
 
      while(isalnum(IP[p]))
	{
	  p++;
	}


      if( IP[p] == '.') return validIPAddress4(IP);
      else if(IP[p] == ':')  return  validIPAddress6(IP);

    
  return "Neither";

}




int main(){




  string test = "1.0.1.";

  cout << validIPAddress4(test) << endl;

  return 0;

}
