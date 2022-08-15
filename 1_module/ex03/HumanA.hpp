//
// Created by Anderson Porto on 8/15/22.
//

#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{

public:
    HumanA(const std::string& name, Weapon& type);

    ~HumanA();

    const Weapon& getType() const;

    void setType(const Weapon& type);

    void attack();

private:
    std::string Name;
    Weapon      &Type;

};


#endif //EX03_HUMANA_HPP
