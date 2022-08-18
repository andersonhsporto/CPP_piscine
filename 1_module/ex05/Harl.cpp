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
    void (Harl::*ptr[4])( void ) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string comments[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int         index = 0;

    while (index < 4 && comments[index] != level) index++;
    switch (index)
    {
    case 0:
        (this->*ptr[index])();
        break;
    case 1:
        (this->*ptr[index])();
        break;
    case 2:
        (this->*ptr[index])();
        break;
    case 3:
        (this->*ptr[index])();
        break;
    default:
        std::cout << "The Harl comments are DEBUG, INFO, WARNING and ERROR" << std::endl;
    }

}

void Harl::debug(void)
{
    std::cout << DEBUG_MSG << std::endl;
}

void Harl::info(void)
{
    std::cout << INFO_MSG << std::endl;
}

void Harl::warning(void)
{
    std::cout << WARNING_MSG << std::endl;
}

void Harl::error(void)
{
    std::cout << ERROR_MSG << std::endl;
}

