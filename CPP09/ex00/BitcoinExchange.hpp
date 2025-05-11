#ifndef BITCOINeXCHANGE_HPP
#define BITCOINeXCHANGE_HPP


#include <map>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>

class BitcoinExchange
{
private:
	std::map<int, float> _dataBase;
	std::map<int, float> _input;
	bool checkInput(int year, int month, int day);
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& orig);
	~BitcoinExchange();
	BitcoinExchange& operator=(const BitcoinExchange& orig);
	void	databaseInit(const std::string& filepath);
	void	makeCalc(const std::string& filepath);
	const std::map<int, float>& getDatabase() const;
	void	printResult(std::map<int, float>::iterator it, float value);
	void	findValue(int data, float& value);

};






#endif