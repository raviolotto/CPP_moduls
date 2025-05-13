#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

class RPN
{
private:
	std::stack<int> stack;
	RPN(const RPN& orig);
	RPN& operator=(const RPN& orig);
	public:
	RPN();
	void RPNCalculator(const std::string& expression);
	bool checkExpression(const std::string & expression);
	~RPN();
};



#endif