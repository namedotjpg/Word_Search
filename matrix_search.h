#ifndef WORD_SEARCH
#define WORD_SEARCH

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

/*
Builds a two dimensional dynamic array of the given size
  -- rows: The number of rows in the matrix
  -- cols: The number of columns in the matrix
  -- returns a ponter to a pointer to a char, which is the pointer to the matrix.
*/
char ** build_matrix(int rows, int cols);


/*
Fills a matrix from std in (command line terminal input)
  -- rows: The number of rows in the matrix
  -- cols: The number of columns in the matrix
  -- **matrix: The matrix to be filled
  -- Should simply accept input via cin or getline, etc.
  -- Should only fill the matrix (not do things like discard junk input; leave that in main if needed).
*/
void fill_matrix(int rows, int cols, char **matrix);


/*
Prints the matrix as follows
*/
void print_matrix(int rows, int cols, char **matrix);


/*
Deletes a two dimensional dynamically allocated matrix
  -- rows: The number of rows in the matrix
  -- **matrix: the pointer to the matrix to be deleted
*/
void delete_matrix(int rows, char **matrix);


/*
Modifies sol to contain the locations of the start and end characters of the word.
  -- sol: 4-large array of ints, where:
     ind 0: row start, 
     ind 1: col start, 
     ind 2: row end, 
     ind 3: col end
  -- word: the word being searched for
  -- rows: the number of rows in the matrix
  -- cols: the number of columns in the matrix
  -- **matrix: pointer to a dynamically allocated array containing the characters to be searched
  -- if the solution does not exist in the matrix, set all 4 values stored in the sol array to -1
*/
void matrix_search(int sol[], string word, int rows, int cols, char **matrix);

#endif

