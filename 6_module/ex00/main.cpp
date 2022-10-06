#include <iostream>
#include "ConvertService.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Usage: ./convert [value]" << std::endl;
    return 1;
  }
  ConvertService::convert(argv[1]);
  return 0;
}