// Hello world program
// https://code.visualstudio.com/docs/cpp/config-mingw

// Windows 10 
// Setup auto build: Terminal -> Configure Default Build Task -> g++
// Build: Ctrl+Shift+B

// Setup debugger: Run -> Add Configuration -> C++ (GBD/LLDB) -> g++
// Build & Debug: F5

// Run from command line: ./helloworld.exe

#include <iostream>

int main() {

  int a = 1;

  std::cout << "Hello world!";
  return 0;

}