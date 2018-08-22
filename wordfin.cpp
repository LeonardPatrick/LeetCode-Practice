#include<iostream>
#include<vector>
using namespace std;


bool search(vector< vector<char> >& b, int i, int j, string w, int k)
{

 

  if(k == w.length()) return true;

  if(i - 1 >= 0 && b[i - 1][j] == w[k])
    {
      char temp = b[i][j];
      b[i][j] = '.';
      if(search(b, i - 1, j, w, k  + 1)) return true;
      b[i][j] = temp;
    }

  if(i + 1 < b.size() && b[i + 1][j] == w[k])
    {
      char temp = b[i][j];
      b[i][j] = '.';
      if(search(b, i + 1, j, w, k  + 1)) return true;
      b[i][j] = temp;
    }


  if(j + 1 < b[0].size() && b[i][j + 1] == w[k]) 
    {
      char temp = b[i][j];
      b[i][j] = '.';
      if(search(b, i, j + 1, w, k  + 1)) return true;
      b[i][j] = temp;    
    }


  if(j - 1 >= 0 && b[i][j - 1] == w[k])
    {
      char temp = b[i][j];
      b[i][j] = '.';
      if(search(b, i, j - 1, w, k  + 1)) return true;
      b[i][j] = temp;
    }


  return false;


}


bool exist(vector< vector<char> > board, string word)
{

  if(word.length() == 0) return false;

  for(int i = 0; i < board.size(); i++)
    {

      for(int j = 0; j < board[0].size(); j++)
	{

	  if(board[i][j] == word[0])
	    {
	      if(word.length() == 1)  return true;


	      char temp = board[i][j];
	      board[i][j] = '.';
	      if(search(board,i,j,word,1)) return true;
	      board[i][j] = temp;

	    }

	}

    }

      return false;

}

int main()
{


  //  vector< vector <char> > b =  {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};

  vector< vector<char> > b = {{'A'}};

  string test = "AB";

  cout <<   exist(b, test) << endl;



  return 0;


}

