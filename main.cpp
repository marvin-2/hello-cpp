// Hello world program
// https://code.visualstudio.com/docs/cpp/config-mingw

// Windows 10 
// Setup auto build: Terminal -> Configure Default Build Task -> g++
// Building multiple CPP files, change tasks.json args: from "${file}" to "${fileDirname}/*.cpp"
// Build: Ctrl+Shift+B

// Setup debugger: Run -> Add Configuration -> C++ (GBD/LLDB) -> g++
// Build & Debug: F5

// Run from command line: ./main.exe

// newline performance from best to worst:
//  '\n'
//  "\n"
//  endl - forces ﬂushing the buffer

#include <iostream>
#include "helloworld.h"

int main() {

  hello();
  return 0;

}