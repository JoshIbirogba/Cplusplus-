#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

const int MAX = 100;

typedef bool BOOL;
typedef string WORD;

typedef struct Pair{
	int count;
	WORD w;
}Pair;

typedef struct entry{
	Pair e;
	struct entry *leftChild;
	struct entry *rightChild;
	struct entry *next;
	struct entry *prev;

}ENTRY;

typedef struct dict{
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

#endif