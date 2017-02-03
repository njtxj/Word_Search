#ifndef WORDSEARCH_H
#define WORDSEARCH_H

#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

#define uint unsigned int

class wordSearch
{
public:
    wordSearch();

    bool wordExist(vector<vector<char> > &array, string word);
    bool wordCheck(uint k,string &word, uint i, uint j, vector<vector<char> > &array);

};

#endif // WORDSEARCH_H
