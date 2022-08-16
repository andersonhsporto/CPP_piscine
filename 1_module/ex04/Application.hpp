//
// Created by Anderson Porto on 8/15/22.
//

#ifndef EX04_APPLICATION_HPP
#define EX04_APPLICATION_HPP

#include <string>
#include <fstream>
#include <iostream>
#include "Service.hpp"

class Application
{

public:

    Application();

    ~Application();

    static int Controller(int argc, char *argv[]);

};

#endif //EX04_APPLICATION_HPP
