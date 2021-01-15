#include <stdbool.h> 
#define NUM_LETTERS (26) 

// trie node 
typedef struct node 
{ 
    struct node *children[NUM_LETTERS]; 
	
	int count;

    bool isEndOfWord; 
}node;

node *getNode(void);
void insert(node *root, const char *key);
void print(node *root, char temp[], int pos , bool reverse); 
void deleteTrie(node *root);

