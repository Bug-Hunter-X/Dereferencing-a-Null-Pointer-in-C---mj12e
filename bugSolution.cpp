#include <iostream>

int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) {
    *ptr = 10; 
  } else {
    std::cerr << "Error: Null pointer dereferenced!\n";
    return 1; // Indicate an error
  }
  return 0;
} 