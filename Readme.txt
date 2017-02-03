
Operation steps:

The development environment is based on QT.
Three main files are wordsearch.h,wordsearch.cpp and main.cpp. 

1.You can run the wordSearch.exe under the debug file to see the program results.
2.You can also new a project under the VS or other enviroment and include these three files to run the project.




Task1-Method

wordSearch::wordExist
Step1:Start with first letter in the 2D borad in order and find the first letter(L1) in the board which matches with the first letter(G1) of the given word.

      If matched, turn to Step 2. 
      If not, the 2D borad dose not contain the given word.

wordSearch::wordCheck
Step2:Compare the letters in the 4 directions(some just have 2-3 directions based on their position in the 2D board) of the L1 with the next letter of the given word. 

      If matched, update the position of L1 into the new position and mark the former position as '*' in order to show it has been "went through",then turn to Step 2.
      If not, the 2D borad dose not contain the given word.

Main idea: Use recursion structure to do the word search.