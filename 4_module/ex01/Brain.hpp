//
// Created by Anderson Porto on 10/4/22.
//

#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP

#include <string>
#include <iostream>

#define CYAN "\033[0;36m"
#define RESET "\033[0m"

class Brain
{
public:
    Brain();
    Brain(std::string ideaName);
    Brain(const Brain &copy);
    Brain &operator=(const Brain &copy);
    ~Brain();

    const std::string* GetIdeas() const;
    void printIdeas() const;

private:
    std::string ideas[100];
};


#endif //EX01_BRAIN_HPP
