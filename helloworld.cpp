// Hello world program
// https://code.visualstudio.com/docs/cpp/config-mingw

// Windows 10 
// Setup auto build: Terminal -> Configure Default Build Task -> g++
// Building multiple CPP files, change tasks.json args: from "${file}" to "${fileDirname}/*.cpp"
// Build: Ctrl+Shift+B

// Setup debugger: Run -> Add Configuration -> C++ (GBD/LLDB) -> g++
// Build & Debug: F5

// Run from command line: ./helloworld.exe

#include <iostream>
#include <string>

using namespace std;

int hello() {

  string msg = "Hello world!";

  cout << msg;
  return 0;

}