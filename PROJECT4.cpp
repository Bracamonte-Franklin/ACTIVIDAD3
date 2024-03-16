/* Programa que genera un vector de 300 números positivos aleatorios menores a 75
   y realiza operaciones con ellos.
   Por: [Franklin Bracamonte]
   Para: [Programación I-UBA]
*/
#include <iostream>
#include <vector>
#include <algorithm> // Incluir la biblioteca algorithm para usar sort
#include <cstdlib> // Incluir la biblioteca cstdlib para usar rand
#include <conio.h> // Incluir la biblioteca conio.h para usar _getch

int main() {
    // Crear un vector para almacenar los números
    std::vector<int> numeros;

    // Generar números aleatorios y almacenarlos en el vector
    for (int i = 0; i < 300; ++i) {
        numeros.push_back(rand() % 75); // Generar números aleatorios menores a 75
    }

    // Visualizar los números de la lista en orden creciente
    std::sort(numeros.begin(), numeros.end());

    std::cout << "Números en orden creciente:" << std::endl;
    for (const auto& num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Imprimir una lista que contenga los números menores a 20
    std::cout << "Números menores a 20:" << std::endl;
    for (const auto& num : numeros) {
        if (num < 20) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

    // Imprimir una lista que contenga los números mayores a 50
    std::cout << "Números mayores a 50:" << std::endl;
    for (const auto& num : numeros) {
        if (num > 50) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

    // Esperar a que el usuario presione una tecla para salir
    std::cout << "Presione una tecla para salir...";
    _getch(); // Utilizar _getch para leer una tecla sin mostrarla en pantalla

    return 0;
}

