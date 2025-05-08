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

unsigned int shortestSpan(){
	
}