#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

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

		class noSpaceException : public std::exception{
			public : 
				virtual const char* what() const throw()
				{
					std::cout << "error no space" << std::endl;
				}
		};

		class noSpanFoundable : public std::exception{
			public:
				virtual const char* what() const throw()
				{
					std::cout << "no span foundable" << std::endl;
				}
		};
};

#endif