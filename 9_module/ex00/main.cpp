//
// Created by anderson on 14/03/23.
//
#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <data file>" << std::endl;
    return 1;
  }
  BitcoinExchange bitcoinExchange;
  bitcoinExchange.readDatabaseFile();
  bitcoinExchange.readDataFile(argv[1]);
  return 0;
}