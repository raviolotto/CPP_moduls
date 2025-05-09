#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span{
	public:
		unsigned int size;
		Span();
		std::vector<long> number;
		~Span();
		Span(unsigned int Size);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		void addNumber(long number);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addMultipleNumber(std::vector<long>::iterator begin, std::vector<long>::iterator end);

		class noSpaceException : public std::exception{
			public : 
				virtual const char* what() const throw()
				{
					return "error no space";
				}
		};

		class noSpanFoundable : public std::exception{
			public:
				virtual const char* what() const throw()
				{
					return "no span foundable" ;
				}
		};
};

#endif