#include "wordsearch.h"

wordSearch::wordSearch()
{

}


bool wordSearch::wordExist(vector<vector<char> > &array, string word)
{
    uint m = array.size();
    if(m <= 0)
        return false;
    uint n = array[0].size();
    for(uint i = 0; i < m; i++)
        for(uint j = 0; j < n; j++)
        {
            if(wordCheck(0, word, i, j, array))
                return true;
        }

    return false;
}

bool wordSearch::wordCheck(uint k, string &word, uint i, uint j, vector<vector<char> > &array)
{

    if(k==(word.size()-1) && (array[i][j]==word[k]))
        return true;

    if(array[i][j] != word[k])
        return false;

    char temp = array[i][j];

    array[i][j] = '*';

    bool t1=false, t2=false, t3=false, t4=false;

    // array[i][j] Up
    if(i>0 && array[i-1][j]!='*')
        t1 = wordCheck(k+1, word, i-1, j, array);

    // array[i][j] Down
    if(!t1 && i< (array.size()-1) && array[i+1][j] != '*')
        t2 = wordCheck(k+1, word, i+1, j, array);

    // array[i][j] Left
    if(!t1 && !t2 && j>0 && array[i][j-1] != '*')
        t3 = wordCheck(k+1, word, i, j-1, array);

    // array[i][j] Right
    if(!t1 && !t2 && !t3 && j< (array[0].size()-1) && array[i][j+1]!='*')
        t4 = wordCheck(k+1, word, i, j+1, array);

    array[i][j] = temp;
    return t1 || t2 || t3 || t4;
}

