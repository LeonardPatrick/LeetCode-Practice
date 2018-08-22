#include<iostream>

using namespace std;

bool isAnagram(string m, string p)
{

  if(m.length() != p.length()) return false;

  int count[26] ={0};
  int n = p.length();


  for(int i = 0; i < n; i++)
    {

      count[p[i] - 'a']++;
      count[m[i] - 'a']--;

    }


  for(int i = 0; i < 26; i++) if(count[i]) return false;

  return true;


}



int main()
{

string  s = "anagram";

 string  t = "nagarams";

 cout << isAnagram(s,t) << endl;


  return 0;


}



