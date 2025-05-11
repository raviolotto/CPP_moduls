#include "BitcoinExchange.hpp"


void printMap(const std::map<int, float>& origMap, std::string first, std::string second){

	std::map<int, float> map = origMap;
    std::map<int, float>::iterator it = map.begin();
    while(it != map.end()){
        std::cout << first <<it->first << second << it->second << std::endl;
        it++;
    }
}

int main(int ac, char** av){
	if(ac != 2){
		std::cout << "no file provided" << std::endl;
		return 1;
	}
	(void)av;
	BitcoinExchange bitExchanger;
	try{
		bitExchanger.databaseInit("./data.csv");
		bitExchanger.makeCalc(av[1]);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	//printMap(bitExchanger.getDatabase(), "data: ", " value: ");
	return 1;
}