#include "main.hpp"

int main() {
  Data *andersonData = new Data;

  andersonData->name = "Anderson";
  andersonData->lastName = "Porto";
  andersonData->number = 42;

  std::cout << GREEN << "Data before serialization:" << RESET << std::endl;
  std::cout << GREEN << "Name: " << andersonData->name << RESET << std::endl;
  std::cout << GREEN << "Last name: " << andersonData->lastName << RESET << std::endl;
  std::cout << GREEN << "Number: " << andersonData->number << RESET << std::endl;

  uintptr_t serializedData = serialize(andersonData);
  Data *deserializedData = deserialize(serializedData);

  std::cout << CYAN << "\nData after serialization:" << RESET << std::endl;
  std::cout << CYAN << "Name: " << deserializedData->name << RESET << std::endl;
  std::cout << CYAN << "Last name: " << deserializedData->lastName << RESET << std::endl;
  std::cout << CYAN << "Number: " << deserializedData->number << RESET << std::endl;
  delete andersonData;
}

uintptr_t serialize(Data *ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
  return reinterpret_cast<Data *>(raw);
}