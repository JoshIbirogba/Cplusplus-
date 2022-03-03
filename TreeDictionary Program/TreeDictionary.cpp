#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

const int MAX = 100;

typedef bool BOOL;
typedef string WORD;

typedef struct Pair
{
	int count;
	WORD w;
}Pair;

typedef struct entry
{
	Pair e;
	struct entry *leftChild;
	struct entry *rightChild;
	struct entry *next;
	struct entry *prev;

}ENTRY;

typedef struct dict
{
	int maxEntries;
	int numWords;
	ENTRY *Words;
	ENTRY *wordLen;
}DICT;

ENTRY *LocateWord(DICT& , WORD);
BOOL FullDictionary(DICT&);
BOOL InsertWord(DICT&,WORD);
WORD GetNextWord(void);
void DumpDictionary(DICT&);
void rebuildList(DICT&, ENTRY *);


BOOL InsertWord(DICT &dict, WORD word)
{
	ENTRY *d = dict.wordLen;
	
	ENTRY *p = new (ENTRY);
	if(!FullDictionary(dict))
	{
		p->leftChild = p->rightChild = p -> prev = nullptr;
		(p->e).w = word;
		(p->e).count = 1;
		dict.numWords++;
		p->next = dict.wordLen;
		if( nullptr != dict.wordLen ) (dict.wordLen)->prev = p;
		dict.wordLen = p;
	}
	return true;
}


 // display contents of dictionary
void DumpDictionary(DICT &dict) 
{
	DICT *d = &dict;
	ENTRY *a = (dict.wordLen);

	cout << "--------DICTIONARY-------\n";

	while(nullptr != a)
	{
		cout << (a->e).w << " " << (a->e).count;
		a = (a->next);
	}
}

//gets next word from Input
WORD GetNextWord(void)
{
	WORD w;
	char ch;
	BOOL newLine = false;

	while(cin.good())
	{ 
		ch = cin.get();
		ch = tolower(ch);
		
		if( isalpha(ch))
		{  // if the word is an alphabet.
			w.push_back(ch);
			newLine = true;
		}
		else if(newLine) return w;
	}
	return w;
}

//checks if the dictionary is full
BOOL FullDictionary(DICT &dict) 
{
	int len = (dict.numWords);
	if(len <= dict.maxEntries)
	{
		return false;
	}
	else
		return true;
}

void rebuildList(DICT &dict, ENTRY *p) 
{
	ENTRY *d = dict.wordLen;
	ENTRY *a = p->next;
	ENTRY *b = p;
	if (nullptr == a) return;
	
	if ( d == p)
	{
		d = p->next;
		d->prev = nullptr;
	} 
	else 
	{
		a->prev = p->prev;
		p->prev->next = a;
	}
	
	while((nullptr != a) && ((a->e).count < (p->e).count))
	{
		b = a;
		a = a->next;
	}
	
	if ( nullptr == a)
	{
		p->next = nullptr;
		p->prev = b;
		b->next = p;
	} 
	else 
	{
		p->prev = a->prev;
		a->prev = p;
		p->next = a;
		
		if ( a == d) d = p;
		else p->prev->next = p;
	}

}
//checks if dictionary contains word
ENTRY *LocateWord(DICT &dict, WORD word)
{
	DICT *d = &dict;
	ENTRY *a = (dict.wordLen);
	while(nullptr != a)
	{
	    if((a->e).w == word) 
		   return a;
		
		else a = a-> next;
	}
 	return nullptr;
}

DICT dictionary={MAX,0,0,0}; 
WORD word;   

int main (void) 
{
    ENTRY *pos;

    while (1) {
       word = GetNextWord();
       if ( word.empty() )
	{
           DumpDictionary(dictionary);
           break;
    }
       if ((pos = LocateWord(dictionary,word)) != nullptr )
	    { 
           (pos->e).count++;
			rebuildList(dictionary,pos);
       }
       else if (!InsertWord(dictionary,word)) cout << "dictionary full " << word <<  " cannot be added\n";
    }
    return 0;
}