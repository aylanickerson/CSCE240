
/*
 * Copyright 2018
 * Created by Jeremy S Lewis
 */

#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
// using rand
// using srand

int main(int argc, char** argv) {
  // seed random number gen with a const literal 123
    srand(123);//will always get the same series of random numbers
    
  // create two const ints for kRows and columns of matrix
    const int kRows = 4, kCols =3;
  // create int matrix and assign each element a random [1, 100]
   // int **matrix = nullptr;
    typedef int* intptr;
    matrix = new intptr[kRows];
    for (int i=0; i<kRows; ++i)
        matrix[i] = new int[kCols];
   // matrix=new int *[kRows];
  // print int matrix
    for (int i=0; i<kRows; ++i)
    {
        for(int j=0; j<kCols; ++j)
            cout << matrix[i][j] << '\t';
        cout << endl;
    }
  // reseed random number gen with 123
  // create dynamic int matrix twice as large
  // and assign each element a random [1, 100]

  // print matrix

  return 0;
}
