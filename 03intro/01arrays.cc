/*
 * Copyright 2018
 * Created by Jeremy S Lewis
 */

#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char** argv) {
  // create a const int to hold the size of the array
  // use the const int to create an array
    const int kSize = 4;
    int arr[kSize]; //declare an array
    //once you define a const you cannot change its value
  // store integers 1 to n in the array, where n is the size of the array
    for(int i=0;i<kSize;++i)
        arr[kSize]=i+1;
  // determine the sum of the n integers stored in the array
  // display the sum
    int sum=0;
    for(int i=0;i< kSize;++i)
        sum += arr[i];
    cout << "Sum: " << sum << endl;
  // create a second array and copy each value, doubled, from the first
    int brr[kSize];
    brr=arr; //brr points to arr, two names for 1 place in mem
    for(int i=0; i<kSize; ++i)
        brr[i] = 2*arr[i];
  // display both arrays, 1 element of each per line, tab delimited
    //jjjfor(int i=0;i<kSize;++i)
        
        
  return 0;
}
