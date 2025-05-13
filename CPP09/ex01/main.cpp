#include "RPN.hpp"

int main(int ac, char**av)
{
	if(ac != 2)
		std::cerr << "error bad input; format: ./RPN \"valid expression\"" << std::endl;
	
	RPN rpn;
	rpn.RPNCalculator(av[1]);
}