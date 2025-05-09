#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector> // Includi vector per il test originale (se necessario)

int main() {
    // Test con MutantStack (basato su std::stack)
    std::cout << "Test con MutantStack:" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element of MutantStack: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size of MutantStack after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    std::cout << "Elements of MutantStack (iterated): ";
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    // Test con std::list
    std::cout << "\nTest con std::list:" << std::endl;
    std::list<int> myList;

    myList.push_back(5);
    myList.push_back(17);

    std::cout << "Back element of std::list: " << myList.back() << std::endl;
    myList.pop_back();
    std::cout << "Size of std::list after pop_back: " << myList.size() << std::endl;

    myList.push_back(3);
    myList.push_back(5);
    myList.push_back(737);
    myList.push_back(0);

    std::list<int>::iterator list_it = myList.begin();
    std::list<int>::iterator list_ite = myList.end();

    ++list_it;
    --list_it;

    std::cout << "Elements of std::list (iterated): ";
    while (list_it != list_ite) {
        std::cout << *list_it << " ";
        ++list_it;
    }
    std::cout << std::endl;

    return 0;
}