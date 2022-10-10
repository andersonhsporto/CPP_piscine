//
// Created by Anderson Porto on 10/9/22.
//

#ifndef EX01_MAIN_HPP
#define EX01_MAIN_HPP

#include <string>
#include <iostream>
#include <stdint.h>

#define GREEN "\033[1;32m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

typedef struct s_data {
    std::string name;
    std::string lastName;
    int number;
} Data;

uintptr_t serialize(Data *ptr);

Data *deserialize(uintptr_t raw);

#endif //EX01_MAIN_HPP
