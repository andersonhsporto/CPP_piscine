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
    for (int i = index; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            (this->*ptr[i])();
            break;
        case 1:
            (this->*ptr[i])();
            break;
        case 2:
            (this->*ptr[i])();
            break;
        case 3:
            (this->*ptr[i])();
            return;
        }
    }
    std::cout << COMPLAINING << std::endl;
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
    std::cout << "[ WARNING ]\n" << WARNING_MSG << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n" << ERROR_MSG << std::endl;
}
