#include "PmergeMe.hpp"
#include <cstdlib>
#include <ctime>
#include <cctype>

PmergeMe::PmergeMe() : _vectorTime(0), _dequeTime(0) { }

PmergeMe::~PmergeMe() { }

void PmergeMe::parseInput(int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        std::string arg(argv[i]);
        if (arg.empty()) {
            std::cerr << "Error empty input" << std::endl;
            exit(1);
        }
        for (size_t j = 0; j < arg.size(); j++) {
            if (!std::isdigit(arg[j])) {
                std::cerr << "Error not a digit" << std::endl;
                exit(1);
            }
        }
        long value = std::atol(arg.c_str());
        if (value <= 0) {
            std::cerr << "Error not a positive number" << std::endl;
            exit(1);
        }
        _vector.push_back(value);
        _deque.push_back(value);
    }
    _original = _vector;
	for(size_t i = 0; i < _original.size(); i++){
		std::vector<long>::iterator it = std::find(_original.begin() + i + 1, _original.end(), _original[i]);
		if(it != _original.end()){
			std::cerr << "Error double number" << std::endl;
			exit(1);
		}
	}
}


void PmergeMe::binaryInsertVector(std::vector<long>& vec, long value) {
    int left = 0;
    int right = vec.size() - 1;
    int mid = 0;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (vec[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    vec.insert(vec.begin() + left, value);
}

void PmergeMe::mergeInsertSortVector(std::vector<long>& vec) {
    if (vec.size() <= 1)
        return;
    
    std::vector<long> first;
    std::vector<long> second;
    size_t i = 0;
    size_t n = vec.size();
    for (; i + 1 < n; i += 2) {
        long a = vec[i];
        long b = vec[i + 1];
        if (a > b) {
            long tmp = a;
            a = b;
            b = tmp;
        }
        first.push_back(a);
        second.push_back(b);
    }
    bool odd = false;
    long extra = 0;
    if (i < n) {
        odd = true;
        extra = vec[i];
    }
    mergeInsertSortVector(first);
    
    std::vector<long> sorted(first.begin(), first.end());
    for (size_t j = 0; j < second.size(); j++) {
        binaryInsertVector(sorted, second[j]);
    }
    if (odd)
        binaryInsertVector(sorted, extra);
    
    vec = sorted;
}

void PmergeMe::binaryInsertDeque(std::deque<long>& deq, long value) {
    int left = 0;
    int right = deq.size() - 1;
    int mid = 0;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (deq[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    deq.insert(deq.begin() + left, value);
}

void PmergeMe::mergeInsertSortDeque(std::deque<long>& deq) {
    if (deq.size() <= 1)
        return;
    
    std::deque<long> first;
    std::deque<long> second;
    size_t i = 0;
    size_t n = deq.size();
    for (; i + 1 < n; i += 2) {
        long a = deq[i];
        long b = deq[i + 1];
        if (a > b) {
            long tmp = a;
            a = b;
            b = tmp;
        }
        first.push_back(a);
        second.push_back(b);
    }
    bool odd = false;
    long extra = 0;
    if (i < n) {
        odd = true;
        extra = deq[i];
    }
    mergeInsertSortDeque(first);
    
    std::deque<long> sorted(first.begin(), first.end());
    for (size_t j = 0; j < second.size(); j++) {
        binaryInsertDeque(sorted, second[j]);
    }
    if (odd)
        binaryInsertDeque(sorted, extra);
    
    deq = sorted;
}

void PmergeMe::sort() {
	clock_t start = clock();
	mergeInsertSortVector(_vector);
	clock_t end = clock();
	_vectorTime = (double)(end - start) * 1e6 / CLOCKS_PER_SEC;

	start = clock();
	mergeInsertSortDeque(_deque);
	end = clock();
	_dequeTime = (double)(end - start) * 1e6 / CLOCKS_PER_SEC;
}

void PmergeMe::printResults() const {
	std::cout << "Before: ";
	for (size_t i = 0; i < _original.size(); i++)
		std::cout << _original[i] << " ";
	std::cout << std::endl;

	std::cout << "After: ";
	for (size_t i = 0; i < _vector.size(); i++)
		std::cout << _vector[i] << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << _vector.size()
			  << " elements with std::vector : " << _vectorTime << " us" << std::endl;

	std::cout << "Time to process a range of " << _deque.size()
			  << " elements with std::deque : " << _dequeTime << " us" << std::endl;
}

