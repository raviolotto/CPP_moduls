#include "Span.hpp"

int main() {
    try {
        Span sp(5); // Creazione di un oggetto Span con capacità 5

        sp.addNumber(10);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
        try {
            sp.addNumber(20);
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
		Span sp2(10);
        std::vector<long> extraNumbers;
		extraNumbers.push_back(100);
		extraNumbers.push_back(200);
		extraNumbers.push_back(300);
        try {
            sp2.addMultipleNumber(extraNumbers.begin(), extraNumbers.end()); // Dovrebbe generare un'eccezione
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
		std::cout << sp2.number[2] << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
    return 0;
}