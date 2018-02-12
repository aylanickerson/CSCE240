/*
 * Copyright 2018
 * Created by Jeremy S Lewis
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
  // create an int pointer to hold a dynamic array
    int *dyna=nullptr; //* makes it a pointer
  // prompt user for the size of the array
    cout << "How big is the array? ";
    int size;
    cin >> size;
  // request memory for an array of given size
    dyna = new int[size];
  // fill array with integers from -100 to -100 + size
    for int(i=0;i<size;++i)
        dyna[i] =-100+i;
  // double array, while retaining the original values
    int *tmp = new int[2*size];
    for(int i=0;i<size;++i)
        tmp[i]=dyna[i];
    cout << "before: " << dyna << endl;
    dyna=tmp;
    cout << "after: " << dyna <<endl;
    delete dyna;
    dyna=tmp;
  // half array while retaining the original size / 2 values

  return 0;
}
