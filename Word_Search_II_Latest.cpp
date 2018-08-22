#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void printVec2D(vector <vector <char> > g )
{

  for(int i = 0; i < g.size(); i++)
    {
      for(int j = 0; j < g[i].size(); j++)
	{
	  cout << g[i][j] << " "; 
	}

           cout << endl;
    }
}




void printVec2D(vector <string > g )
{

  for(int i = 0; i < g.size(); i++)
    {
       cout << g[i] << endl;
    }

}



bool mv(vector< vector <char> > board, int i, int j, string word, int k)
{
  if((i - 1 ) >= 0 && board[i - 1][j] == word[k])  // up                                                                                                                                                   
  {
      char tmp = board[i - 1][j];
      board[i - 1][j] = '.';
      if(k == word.length() - 1) return true; // terminating condition                                                                                                                                      
      if( mv(board, i - 1, j, word, k + 1 )) return true; //keep moving up to see if the next letter is there.                                                                                              
      board[i - 1][j] = tmp;
    }

  if( (i + 1) < board.size() && board[i + 1][j] == word[k]) // down                                                                                                                                         
    {

      char tmp = board[i + 1][j];
      board[i + 1][j] = '.';
      if(k == word.length() - 1) return true; //terminating condition                                                                                                                                       
      if( mv(board, i + 1, j, word, k + 1 )) return true; // keep moving down to see if next letter is there.                                                                                               
      board[i + 1][j] = tmp;
    }

  if( (j + 1) < board[0].size() && board[i][j + 1] == word[k] ) // right                                                                                                                                    
    {

      char tmp = board[i][j + 1];
      board[i][j + 1] = '.';
      if(k == word.length() - 1) return true;
      if( mv(board, i, j + 1, word, k + 1)) return true; // keep moving right to see if next letter is there.                                                                                               
      board[i][j + 1] = tmp;
    }

  if( (j - 1) >= 0 && board[i][j - 1] == word[k] ) // left                                                                                                                                                  
    {

      char tmp = board[i][j - 1];
      board[i][j - 1] = '.';
      if(k == word.length() - 1) return true; // terminating condition.                                                                                                                                     
      if( mv(board, i, j - 1, word, k + 1)) return true;
      board[i][j - 1] = tmp;
    }

  return false;

}
    
bool exist(vector< vector<char> > board, string word)
{


  if(board.size()== 0) return false;


  for(int i = 0; i < board.size(); i++)
    {
      for(int j = 0; j <  board[i].size(); j++)
        {
	  if(board[i][j] == word[0]) // initialiser                                                                                                                                                        
	    {
	      char temp = board[i][j];
	      board[i][j] = '.';
	      if(word.length() == 1) return true;
	      if( mv( board,  i, j,  word, 1)) return true;
	      board[i][j] = temp;
	    }

        }


    }

  return false;
}


vector<string> unique(vector<string>& words)
{


  sort(words.begin(), words.end());
  vector<string> u;

    u.push_back(words[0]);

  for(int i = 1; i< words.size(); i++)
    {

      if(words[i] != words[i - 1])
	{
	  u.push_back(words[i]);
	}

    }

  return u;

}


vector<string> findWords(vector< vector <char> >& board, vector<string>& words)
{


  vector<string> result;

  if(words.size() == 1 && words[0] == "")
    {
      result = {""};
      return result;
    }
  else
    {
 words =  unique(words); // creating a unique vectors of strings.


  for(int k = 0; k < words.size(); k++)
    {

      if(exist(board, words[k])) result.push_back(words[k]);
    }

  return result;
    }
}





int main()
{

  //  vector<vector<char> > board {{'o', 'a', 'a', 'n'},{'e', 't', 'a', 'e'}, {'i','h', 'k', 'r'},{'i', 'f', 'l', 'v'}};


   vector< vector<char> > board = {{'a'}};
   vector<string> words = {""};


   //    vector<string > words ={"oath","pea","eat","rain", "eat", "pea","tooth"};

   //   vector<string> words ={""}


     vector<string> over =  findWords(board, words); 

 

  //  over = unique(words);


   printVec2D(over); 



  return 0;

}
