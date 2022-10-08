#include <iostream>
#include "ConvertService.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Usage: ./convert [value]" << std::endl;
    return 1;
  }
  ConvertService *convertService = new ConvertService(argv[1]);
  convertService->convert();
  delete convertService;
  return 0;
}