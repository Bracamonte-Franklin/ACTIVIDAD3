/* Programa que genera un vector de 300 n�meros positivos aleatorios menores a 75
   y realiza operaciones con ellos.
   Por: [Franklin Bracamonte]
   Para: [Programaci�n I-UBA]
*/
#include <iostream>
#include <vector>
#include <algorithm> // Incluir la biblioteca algorithm para usar sort
#include <cstdlib> // Incluir la biblioteca cstdlib para usar rand
#include <conio.h> // Incluir la biblioteca conio.h para usar _getch

int main() {
    // Crear un vector para almacenar los n�meros
    std::vector<int> numeros;

    // Generar n�meros aleatorios y almacenarlos en el vector
    for (int i = 0; i < 300; ++i) {
        numeros.push_back(rand() % 75); // Generar n�meros aleatorios menores a 75
    }

    // Visualizar los n�meros de la lista en orden creciente
    std::sort(numeros.begin(), numeros.end());

    std::cout << "N�meros en orden creciente:" << std::endl;
    for (const auto& num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Imprimir una lista que contenga los n�meros menores a 20
    std::cout << "N�meros menores a 20:" << std::endl;
    for (const auto& num : numeros) {
        if (num < 20) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;

    // Imprimir una lista que contenga los n�meros mayores a 50
    std::cout << "N�meros mayores a 50:" << std::endl;
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

