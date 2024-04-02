#include <iostream>
#include "const_file1.cpp"

extern const int ext;
int main() { std::cout << ext << std::endl; }