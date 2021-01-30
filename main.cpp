// Hello world program
// https://code.visualstudio.com/docs/cpp/config-mingw

// Windows 10 
// Setup auto build: Terminal -> Configure Default Build Task -> g++
// tasks.json
//   Multiple CPP files: args -g "${fileDirname}/*.cpp"
//   Output file: args -o "${fileDirname}/${fileBasenameNoExtension}" (add .exe for Windows)
// Build: Ctrl+Shift+B

// Setup debugger: Run -> Add Configuration -> C++ (GBD/LLDB) -> g++
// launch.json
//   Build before debug: "preLaunchTask": "${defaultBuildTask}",
//   Program name: "program": "${workspaceFolder}/${fileBasenameNoExtension}" (add .exe for Windows)
// Build & Debug: F5

// Run from command line: ./main (add .exe for Windows)

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