//
// Created by Anderson Porto on 8/17/22.
//

#ifndef EX05_HARL_HPP
#define EX05_HARL_HPP


#include <string>

class Harl
{
public:
    Harl();

    ~Harl();

    void complain ( std::string level );

private:
    void debug ( void );
    void info ( void );
    void warning ( void );
    void error ( void );

};


#endif //EX05_HARL_HPP
