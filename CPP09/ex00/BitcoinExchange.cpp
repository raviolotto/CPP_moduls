#include "BitcoinExchange.hpp"

void BitcoinExchange::databaseInit(const std::string& filepath)
{
		std::ifstream file(filepath.c_str());
		if (!file.is_open()) {
			throw std::runtime_error("Impossibile aprire il file: " + filepath);
		}
		std::stringstream buffer;
		buffer << file.rdbuf();
		std::string line;
		while (std::getline(buffer, line)){
			if (line.empty() || line == "\r")
				continue;
			std::istringstream data(line.substr(0, (line.find(","))));
			float value = atof((line.substr(line.find(",") + 1)).c_str());
			int year, month, day;
			char dash;
			data >> year >> dash >> month >> dash >> day;
			_dataBase[(year * 10000 + month * 100 + day)] = value;
		}
}

void BitcoinExchange::makeCalc(const std::string &filepath)
{
	std::ifstream file(filepath.c_str());
	if (!file.is_open()) {
		throw std::runtime_error("Impossibile aprire il file: " + filepath);
	}
	std::stringstream buffer;
	buffer << file.rdbuf();
	std::string line;
	while (std::getline(buffer, line)){
		if (line.empty() || line == "\r")
			continue;
		size_t pos = line.find("|");
		if (pos == std::string::npos)
			std::cout << "bad input format is 'data | value' separetor | missing" << std::endl;
		std::istringstream data(line.substr(0, pos));
		float value = atof((line.substr(pos + 1)).c_str());
		int year = 0, month = 0, day = 0;
		char dash;
		data >> year >> dash >> month >> dash >> day;
		if(checkInput(year, month, day)){
			int data = (year * 10000 + month * 100 + day);
			if (value < 0)
				std::cout << "error: not a positive number" << std::endl;
			else if(value > 1000)
				std::cout << "error: value out of range" << std::endl;
			else
				findValue(data, value);
		}
		else
			std::cout << "bad input => " <<  line.substr(0, pos) << std::endl;
	}
}

bool BitcoinExchange::checkInput(int year, int month, int day){
	if(year < 2009 || month < 1 || day < 1 || month > 12 || day > 31)
		return false;
	if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	if (month == 2 && day > 28){
		if ((year % 4 == 0) && day == 29)
			return true;
		else
			return false;
	}
	return true;
}

BitcoinExchange::BitcoinExchange(){

}

BitcoinExchange::~BitcoinExchange(){}

const std::map<int, float>& BitcoinExchange::getDatabase() const
{
	return _dataBase;
}

void BitcoinExchange::printResult(std::map<int, float>::iterator it, float value)
{
	int year = it->first / 10000;
	int month = (it->first % 10000) / 100;
	int day = it->first % 100;
	std::cout << year << "-" << month << "-" << day << " => " << value << " = " << value * it->second << std::endl;
}

void BitcoinExchange::findValue(int data, float& value)
{
	std::map<int, float>::iterator it= _dataBase.find(data);
	if(it != _dataBase.end()){
		printResult(it, value);
		return;
	}
	findValue((data - 1), value);
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& orig){
	if (this != &orig)
	_dataBase = orig.getDatabase();
	return *this;
}



