#include<iostream>
using namespace std;

  const int ALPHABET_SIZE = 26; 


class Trie {
public:


  Trie()
  {

  Trie* children[ALPHABET_SIZE];

  bool end; 


  Trie* getNode(void)
  {

  Trie* pNode = new Trie;

  pNode->end = false;

  for(int i = 0; i < ALPHABET_SIZE; i++)
    pNode -> children[i] = NULL;

  return pNode;

  }

  }



void insert(string word) {
    
   Trie* pCrawl = root;


    for(int i = 0; i < key.length(); i++)
      {
	int index = key[i] - 'a';

	if(!pCrawl -> children[index]) 
	  (*pCrawl).children[index] = getNode();

	pCrawl = pCrawl ->children[index];
      }

    (*pCrawl).end = true; 
}














};



  bool search(struct TrieNode* root, string key)
  {

    struct TrieNode* pCrawl = root;
    int index;

    for(int i = 0; i < key.length(); i++)
      {

	index  = key[i] - 'a';

	if(!(*pCrawl).children[index])
	  return false;

	pCrawl = pCrawl->children[index];

  }


    return(pCrawl != NULL && (*pCrawl).end);


  }




  /*


class Trie {
public:


  // Initialize your data structure here. 
  Trie() {






        
  }
    




  // Inserts a word into the trie. 
  void insert(string word) {






        
  }
    




  // Returns if the word is in the trie. 
  bool search(string word) {







        
  }
    



  // Returns if there is any word in the trie that starts with the given prefix. 
  bool startsWith(string prefix) {








        
  }



};




 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);

 */

int main()
{





  return 0;

}
