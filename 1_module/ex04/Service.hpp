//
// Created by Anderson Porto on 8/15/22.
//

#ifndef EX04_SERVICE_HPP
#define EX04_SERVICE_HPP

#include <iostream>
#include <fstream>

class Service {

 public:
  Service();

  ~Service();

  static bool ValidParameter(int argc, char *argv[]);

  static void OpenFile(const char *address, std::ifstream &file);

  static void BuildFile(std::ifstream &file, char *argv[]);

 private:
  static bool ValidArgs(int argc);

  static bool IsValidFile(const char *address);

  static std::string GetFileName(const char *fileName);

  static void ReplaceString(
      std::string &string,
      const std::string &oldString,
      const std::string &newString);

};

#endif //EX04_SERVICE_HPP
