//
// Created by Anderson Porto on 8/15/22.
//

#ifndef EX04_SERVICE_HPP
#define EX04_SERVICE_HPP

#include <fstream>

class Service
{

public:
    Service();

    ~Service();

    static bool ValidParameter(int argc, char *argv[]);

private:
    static bool ValidArgs(int argc);

    static bool IsValidFile(const char* address);
};


#endif //EX04_SERVICE_HPP
