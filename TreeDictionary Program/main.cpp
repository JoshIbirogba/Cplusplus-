#include "Tree.h"

DICT dictionary={MAX,0,0,0}; 
WORD word;   

int main (void) {
    ENTRY *pos;

    while (1) {
       word = GetNextWord();
       if ( word.empty() )  {
           DumpDictionary(dictionary);
           break;
       }
       if ((pos = LocateWord(dictionary,word)) != nullptr ) { 
           (pos->e).count++;
			rebuildList(dictionary,pos);
       }
       else if (!InsertWord(dictionary,word)) cout << "dictionary full " << word <<  " cannot be added\n";
    }
    return 0;
}
