# Dereferencing a Null Pointer in C++

This repository demonstrates a common C++ error: dereferencing a null pointer.  The code attempts to write a value to a memory location pointed to by a null pointer, leading to undefined behavior, typically a segmentation fault or a crash.

## The Bug

The `bug.cpp` file contains the problematic code.  It declares an integer pointer `ptr` and initializes it to `nullptr`. It then attempts to dereference `ptr` (*ptr) and assign a value to the memory location it points to. Since `ptr` is null, this operation results in a runtime error.

## The Solution

The `bugSolution.cpp` file shows a corrected version of the code. Before dereferencing the pointer, it checks if it is null using an `if` statement.  If the pointer is not null, the code proceeds; otherwise, an error message is printed, or more robust error handling is implemented.

## How to Compile and Run

1. Save the code in files named `bug.cpp` and `bugSolution.cpp`.
2. Compile using a C++ compiler (like g++):
   ```bash
   g++ bug.cpp -o bug
   g++ bugSolution.cpp -o bugSolution
   ```
3. Run the executables:
   ```bash
   ./bug
   ./bugSolution
   ```
The `bug` executable will likely crash, while `bugSolution` will handle the null pointer gracefully.