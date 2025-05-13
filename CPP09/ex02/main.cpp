#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error  no input" << std::endl;
        return 1;
    }

    PmergeMe sorter;
    sorter.parseInput(argc, argv);
    sorter.sort();
    sorter.printResults();

    return 0;
}
