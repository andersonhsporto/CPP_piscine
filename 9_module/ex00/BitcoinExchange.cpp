//
// Created by anderson on 14/03/23.
//

#include <fstream>
#include <iostream>
#include <cstdlib>
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

}

BitcoinExchange::~BitcoinExchange() {

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
  this->data = other.data;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
  if (this != &other) {
    this->data = other.data;
  }
  return *this;
}

void BitcoinExchange::readDataFile(const std::string &fileName) {
  std::string line;
  std::ifstream myfile(fileName.c_str());
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      _printData(line);
    }
    myfile.close();

  }
}

void BitcoinExchange::_printMap() {
  std::map<std::string, float>::iterator it;
  for (it = data.begin(); it != data.end(); it++) {
    std::cout << it->first << " => " << it->second << std::endl;
  }
}

void BitcoinExchange::readDatabaseFile() {
  std::string line;
  std::ifstream myfile("./cpp_09/data.csv");
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      std::string key = line.substr(0, line.find(","));
      std::string value = line.substr(line.find(",") + 1);
      float valueNBR = atof(value.c_str());
      std::pair<std::string, float> pair(key, valueNBR);
      this->data.insert(pair);
    }
    myfile.close();
  }
}

bool isValidLine(std::string line) {
  return line.find(" | ") != std::string::npos;
}

bool isFirstLine(std::string line) {
  return line.find("date") != std::string::npos;
}

bool isGreaterThanIntMax(std::string value) {
  if (value.length() > 10) {
    return true;
  } else if (value.length() == 10) {
    std::string intMax = "2147483647";
    for (int i = 0; i < 10; i++) {
      if (value[i] > intMax[i]) {
        return true;
      }
    }
  }
  return false;
}

std::string BitcoinExchange::toString(int number) {
  std::string str = "";
  int nbr = number;
  while (nbr > 0) {
    str = (char) (nbr % 10 + '0') + str;
    nbr /= 10;
  }
  return str;
}

std::string BitcoinExchange::intToDate(int date) {
  std::string str = toString(date);
  return str.substr(0, 4) + "-" + str.substr(4, 2) + "-" + str.substr(6, 2);
}

std::string BitcoinExchange::subtractOneDay(std::string date) {
  std::string year = date.substr(0, 4);
  std::string month = date.substr(5, 2);
  std::string day = date.substr(8, 2);

  int yearNBR = atoi(year.c_str());
  int monthNBR = atoi(month.c_str());
  int dayNBR = atoi(day.c_str());

  if (dayNBR == 1) {
    if (monthNBR == 1) {
      yearNBR--;
      monthNBR = 12;
      dayNBR = 31;
    } else {
      monthNBR--;
      dayNBR = 31;
    }
  } else {
    dayNBR--;
  }
  return intToDate(yearNBR * 10000 + monthNBR * 100 + dayNBR);
}

bool BitcoinExchange::isGreaterThanDate(std::string date, std::string date2) {
  return dateToInt(date) > dateToInt(date2);
}

float BitcoinExchange::_findNBR(std::string key) {
  std::string date = key;
  if (data.find(date) != data.end()) {
    return data[date];
  } else
    return _findNBR(subtractOneDay(date));
}

void BitcoinExchange::_printData(std::string line) {

  if (isFirstLine(line)) {
    return;
  }
  if (!isValidLine(line)) {
    std::cout << "Error: bad input => " << line << std::endl;
    return;
  }
  std::string key = line.substr(0, line.find(" | "));
  std::string value = line.substr(line.find(" | ") + 3);
  float valueNBR = atof(value.c_str());

  if (valueNBR < 0) {
    std::cout << "Error: not a positive number." << std::endl;
    return;
  }

  if (isGreaterThanIntMax(value)) {
    std::cout << "Error: too large a number" << std::endl;
    return;
  }
  std::cout << key << " => " << valueNBR << " => " << _findNBR(key) * valueNBR << std::endl;
}
