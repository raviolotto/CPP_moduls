#include "Span.hpp"

Span::Span(){

	size = 0;
}

Span::~Span(){}

Span::Span(const Span& obj){
	size = obj.size;
	number = obj.number;
}

Span& Span::operator=(const Span& obj){
	if (this != &obj){
		size = obj.size;
		number = obj.number;
	}
	return *this;
}

Span::Span(unsigned int Size): size(Size){

}

void Span::addNumber(long newNumber){
	if(number.size() < size)
		number.push_back(newNumber);
	else
		throw Span::noSpaceException();
}

unsigned int Span::shortestSpan(){
	if (!size || size == 1)
		throw Span::noSpanFoundable();
	std::sort(number.begin(), number.end());
	int num1 = number[0], num2 = number[1];
	int min_diff = std::abs(num1 - num2);

	for (std::vector<int>::size_type i = 1; i < number.size() - 1; ++i) {
		int diff = std::abs(number[i + 1] - number[i]);
		if (diff < min_diff) {
			min_diff = diff;
			num1 = number[i];
			num2 = number[i + 1];
		}
	}
	return min_diff;
}

unsigned int Span::longestSpan(){
	if (!size || size == 1)
		throw Span::noSpanFoundable();
	std::vector<long>::iterator max = std::max_element(number.begin(), number.end());
	std::vector<long>::iterator min = std::min_element(number.begin(), number.end());
	return (*max - *min);
}

void Span::addMultipleNumber(std::vector<long>::iterator begin, std::vector<long>::iterator end){
	unsigned int insertSize = std::distance(begin, end);
	if ((number.size() + insertSize) > size)
		throw Span::noSpaceException();
	else
		number.insert(number.end(),begin, end);
}