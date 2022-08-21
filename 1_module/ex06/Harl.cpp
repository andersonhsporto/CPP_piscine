//
// Created by Anderson Porto on 8/17/22.
//

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
    void (Harl::*ptr[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    int index = findIndex(level);

    switch (index)
    {
    case 0:
        (this->*ptr[index++])();
    case 1:
        (this->*ptr[index++])();
    case 2:
        (this->*ptr[index++])();
    case 3:
        (this->*ptr[index++])();
        break;
    default:
        std::cout << COMPLAINING << std::endl;
    }
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n" << DEBUG_MSG << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\n" << INFO_MSG << std::endl;
}

void Harl::warning(void)
{
    std::cout << ORANGE << "[ WARNING ]\n" << WARNING_MSG << END << std::endl;
}

void Harl::error(void)
{
    std::cout << RED << "[ ERROR ]\n" << ERROR_MSG << END << std::endl;
}

int Harl::findIndex(std::string level)
{
    std::string comments[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int index = 0;

    while (index < 4 && comments[index] != level)
        index++;
    return index;
}
