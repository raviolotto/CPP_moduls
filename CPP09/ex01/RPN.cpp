#include "RPN.hpp"

RPN::~RPN(){}

RPN::RPN(){}

RPN::RPN(const RPN& orig){(void)orig;}

RPN& RPN::operator=(const RPN& orig){(void)orig; return *this;}

void RPN::RPNCalculator(const std::string& expression){
	if(!checkExpression(expression)){
		std::cerr << "invalid expression" << std::endl;
		return; 
	}
	std::istringstream streamExpression(expression);  
	std::string token;
	while(streamExpression >> token)
	{
		if(token[0] == '+'){
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			stack.push(a + b);
		}
		else if(token[0] == '-'){
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			stack.push(a - b);
		}
		else if(token[0] == '*'){
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			stack.push(a * b);
		}
		else if(token[0] == '/'){
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();
			stack.push(a / b);
		}
		else
		stack.push(atoi(token.c_str()));
	}
	if (stack.size() != 1)
		std::cerr << "error invalid RPN expression" <<std::endl;
	else
		std::cout << stack.top() << std::endl;
}

bool RPN::checkExpression(const std::string & expression){
	for(std::string::const_iterator it =  expression.begin(); it != expression.end() ; it++){
		if (std::isdigit(*it) || *it == '+' || *it == '-' || *it == '*' || *it == '/' || *it == ' ')
			continue;
		else 
			return false;
	}
	if(expression.size() < 5)
		return false;
	return true;
}