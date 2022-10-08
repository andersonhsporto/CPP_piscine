#include <iostream>
#include "ConvertService.hpp"

void tests();

int main(int argc, char **argv) {
  if (argc == 2 && std::string(argv[1]) == "-t") {
    tests();
    return 0;
  } else if (argc != 2) {
    std::cout << "Usage: ./convert [value]" << std::endl;
    return 1;
  }
  ConvertService *convertService = new ConvertService(argv[1]);
  convertService->convert();
  delete convertService;
  return 0;
}

void tests() {
  std::cout << ">>>>>>>>>>>>>>>>>>>Teste 0; " << std::endl;
  ConvertService *zero = new ConvertService("0");
  zero->convert();
  delete zero;
  std::cout << ">>>>>>>>>>>>>>>>>>>Fim do teste 0\n" << std::endl;

  std::cout << ">>>>>>>>>>>>>>>>>>>Teste 1; " << std::endl;
  ConvertService *nam = new ConvertService("nam");
  nam->convert();
  delete nam;
  std::cout << ">>>>>>>>>>>>>>>>>>>Fim do teste 1\n" << std::endl;

  std::cout << ">>>>>>>>>>>>>>>>>>>Teste 2; " << std::endl;
  ConvertService *ft = new ConvertService("42.0f");
  ft->convert();
  delete ft;
  std::cout << ">>>>>>>>>>>>>>>>>>>Fim do teste 2\n" << std::endl;
}
