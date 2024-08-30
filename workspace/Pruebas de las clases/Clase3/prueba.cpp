#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
void imprimirTabla(const std::vector<std::vector<std::string>>& tabla) {
    for (const auto& fila : tabla) {
        for (const auto& columna : fila) {
            std::cout << std::setw(15) << std::left << columna;
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<std::string>> tabla = {
        {"Nombre", "Edad", "Ciudad"},
        {"Alice", "24", "Nueva York"},
        {"Bob", "19", "Los Ángeles"},
        {"Charlie", "22", "Chicago"}
    };

    imprimirTabla(tabla);

    return 0;
}
