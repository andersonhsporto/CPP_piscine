//
// Created by Anderson Porto on 8/15/22.
//

#include "Service.hpp"

bool Service::ValidParameter(int argc, char** argv)
{
    return (ValidArgs(argc) && IsValidFile(argv[1]));
}

void Service::OpenFile(const char* address, std::ifstream &file)
{
    file.open(address);
}

void Service::BuildFile(std::ifstream& file, char** argv)
{
    std::string     line;
    std::string     filename = GetFileName(argv[1]);
    std::ofstream   out(filename.c_str());

    while (!file.eof())
    {
        getline(file, line);
        ReplaceString(line, argv[2], argv[3]);
        out << line << std::endl;
    }
    out.close();
}

bool Service::ValidArgs(int argc)
{
    if (argc != 4)
    {
        std::cout << "Invalid parameter" << std::endl;
        return false;
    }
    else
    {
        return true;
    }

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
        std::cout << "Invalid File" << std::endl;
        return false;
    }
}

std::string Service::GetFileName(const char *fileName)
{
    std::string stringName = fileName;

    stringName = stringName + ".replace";
    return stringName;
}

void Service::ReplaceString(
        std::string& string,
        const std::string& oldString,
        const std::string& newString)
{
    for (size_t i = 0; ;i += newString.length())
    {
        i = string.find(oldString, i);
        if (i == std::string::npos)
            break;
        string.erase(i, oldString.length());
        string.insert(i, newString);
    }
}

Service::Service()
{

}

Service::~Service()
{

}