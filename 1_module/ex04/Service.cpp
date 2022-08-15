//
// Created by Anderson Porto on 8/15/22.
//

#include "Service.hpp"

Service::Service()
{

}

Service::~Service()
{

}

bool Service::ValidParameter(int argc, char** argv)
{
    return (ValidArgs(argc) && IsValidFile(argv[1]));
}

bool Service::ValidArgs(int argc)
{
    if (argc != 4)
        return false;
    else
        return true;
}

bool Service::IsValidFile(const char* address)
{
    std::ifstream file;

    file.open(address);
    if (file)
    {
        file.close();
        return true;
    }
    else
    {
        return false;
    }
}
