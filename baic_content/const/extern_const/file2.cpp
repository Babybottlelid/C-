#include <iostream>
#include "file1.cpp"

extern int ext;
int main() { std::cout << (ext + 10) << std::endl; }