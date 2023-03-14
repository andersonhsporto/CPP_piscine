//
// Created by anderson on 14/03/23.
//

#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cerr << "Usage: " << argv[0] << "\" number of elements\"" << std::endl;
        return 1;
    }
    PmergeMe pmergeMe;
    pmergeMe.parse(argc, argv);
    pmergeMe.sort();
    pmergeMe.print(argc, argv);
    return 0;
}