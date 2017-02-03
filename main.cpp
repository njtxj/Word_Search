
#include"wordsearch.h"

int main()
{

    int nRow,nCol;
    cout<<"Please input the number of rows:";
    cin>>nRow;

    cout<<"Please input the number of cols:";
    cin>>nCol;

    //New a 2D Board Space
    vector<vector<char> > array(nRow,vector<char>(nCol));

    cout<<"Please input a 2D board:"<<endl;

    //Input 2D Board Contents
    for(uint i=0;i < array.size();i++) {
        for(uint j=0;j < array[0].size();j++) {
            cin>>array[i][j];
        }
    }

    //Output 2D Board Contents
    for(uint j=0;j<array.size();j++) {
        for(uint k=0;k<array[0].size();k++) {
            cout<<array[j][k]<<" ";
        }
        cout<<endl;
    }

    wordSearch *pNewWord = new wordSearch();
    if(NULL==pNewWord)
    {
        cout<<"initialization failed!"<<endl;
        exit(1);
    }
    else
    {
        string tempWord;
        cout<<"Please input the search word(exit program with#):";
        cin>>tempWord;
        while(tempWord!="#")
        {
            if(pNewWord->wordExist(array,tempWord))
                cout<<"TRUE"<<endl;
            else
                cout<<"FALSE"<<endl;
            cout<<"Please input the search word(exit program with#):";
            cin>>tempWord;
        }
    }

    delete pNewWord;

    return 0;
}
