//
// Created by Anderson Porto on 8/15/22.
//

#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#include <iostream>

class Weapon
{

public:
    Weapon(const std::string& type);

    Weapon( void );

    ~Weapon( void );

    const std::string& getType() const;

    void setType(const std::string& type);


private:
    std::string type;

};

#endif //EX03_WEAPON_HPP
