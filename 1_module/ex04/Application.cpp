//
// Created by Anderson Porto on 8/15/22.
//

#include "Application.hpp"

int Application::Controller(int argc, char** argv)
{
    std::ifstream   file;

    if (Service::ValidParameter(argc, argv))
    {
        Service::OpenFile(argv[1], file);
        Service::BuildFile(file, argv);
        file.close();
        return 0;
    }
    else
    {
        return 1;
    }
}

Application::Application()
{

}

Application::~Application()
{

}
