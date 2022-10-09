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
  std::cout << GREEN << ">>>>>>>>>>>>>>>>>>>Teste 0; " << RESET << std::endl;
  ConvertService *zero = new ConvertService("0");
  zero->convert();
  delete zero;
  std::cout << GREEN << ">>>>>>>>>>>>>>>>>>>Fim do teste 0\n" << RESET << std::endl;

  std::cout << GREEN << ">>>>>>>>>>>>>>>>>>>Teste 1; " << RESET << std::endl;
  ConvertService *nam = new ConvertService("nam");
  nam->convert();
  delete nam;
  std::cout << GREEN << ">>>>>>>>>>>>>>>>>>>Fim do teste 1\n" << RESET << std::endl;

  std::cout << GREEN << ">>>>>>>>>>>>>>>>>>>Teste 2; " << RESET << std::endl;
  ConvertService *ft = new ConvertService("42.0f");
  ft->convert();
  delete ft;
  std::cout << GREEN << ">>>>>>>>>>>>>>>>>>>Fim do teste 2\n" << RESET << std::endl;
}
