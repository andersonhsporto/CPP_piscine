//
// Created by anderson on 14/03/23.
//

#ifndef EX00__BITCOINEXCHANGE_HPP_
#define EX00__BITCOINEXCHANGE_HPP_

#include <string>
#include <map>

class BitcoinExchange {

public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange (const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);

    // read file
    void readDataFile(const std::string &fileName);

    //
    void readDatabaseFile();

 private:
  //data file
  std::map <std::string, float> data;

  void _printData(std::string line);

  void _printMap();

  float _findNBR(std::string line);
  int dateToInt(std::string date);
  std::string toString(int number);
  std::string intToDate(int date);
  std::string subtractOneDay(std::string date);
  bool isGreaterThanDate(std::string date, std::string date2);
};

#endif //EX00__BITCOINEXCHANGE_HPP_
