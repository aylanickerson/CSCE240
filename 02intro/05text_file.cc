// fstream system library for file i/o

// Introduce fstream from namespasce std into file's name scope

// Include header for iostream system library for console i/o

// get cout and endl from namespace std

// Include string system library for string data type

// get string from namespace std


int main(int argc, char* argv[]) {
  // When other than 2 arguments are provided to program,
  // - Display usage message:
  //  "Usage: 05app <input file>.in"
  // - Exit program with a 1

  int count = 0;  // # of entries
  double input = 0.0,  // an entry
      total = 0.0;  // sum of entries

  fstream fin;  // an instance of the fstream class

  // display file being opened

  // open file

  // get count of entries
  // for each entry, read and accumulate

  // display total
  // close file

  return 0;
}
