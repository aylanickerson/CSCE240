// Include header for iostream system library
#include <iostream>
// Introduce cout and endl from std namespace into file's name scope
using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
    
  // When no arguments are provided to program,
  // - Give user message stating such and
  // - Exit program with a 1
    if(argc==1){
        cout << "You have entered no arguments!" <<endl;
        return 1;
    }
  // Use definite loop to print all arguments, one per line.
    for(int i=0;i<argc;++i)
        cout << "argv[" << i << "]: " << argv[i] << endl;
  return 0;
}
