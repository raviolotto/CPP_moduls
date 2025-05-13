#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <iostream>
#include <algorithm>

class PmergeMe {
	
	private:
	std::vector<long>	_vector;
	std::deque<long>	_deque;
	std::vector<long>	_original;
	double				_vectorTime;
	double				_dequeTime;
	void mergeInsertSortVector(std::vector<long>& vec);
	void binaryInsertVector(std::vector<long>& vec, long value);
	void mergeInsertSortDeque(std::deque<long>& deq);
	void binaryInsertDeque(std::deque<long>& deq, long value);
	
	public:
		PmergeMe();
		~PmergeMe();

		void parseInput(int argc, char **argv);
		void sort();
		void printResults() const;
};

#endif