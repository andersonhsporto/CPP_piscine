//
// Created by Anderson Porto on 8/15/22.
//

#include "Application.hpp"
#include "Service.hpp"

int Application::Controller(int argc, char** argv)
{
    if (Service::ValidParameter(argc, argv))
    {

        return 0;
    }
    else
        return 1;
}
