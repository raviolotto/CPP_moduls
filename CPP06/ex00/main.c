#include <iostream>
#include <cstdlib> // Per strtof
#include <cerrno>  // Per errno

int main() {
    const char* str = "inff";
    char* end;
    errno = 0;
    // Convertiamo la stringa in float
    float value = std::strtof(str, &end);

    // Controlliamo i risultati
    if (end != str) { // Se end è diverso da str, la conversione è avvenuta
        std::cout << "Valore convertito: " << value << std::endl;
        std::cout << "Carattere successivo: '" << *(end)  << "'" << std::endl;
         std::cout << "errno ==  '" << errno  << "'" << std::endl;
    } else {
        std::cout << "Conversione non riuscita." << std::endl;
    }

    return 0;
}