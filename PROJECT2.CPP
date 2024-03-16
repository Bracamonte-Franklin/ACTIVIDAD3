/* Programa que lee 10 números enteros, los almacena en un vector, y calcula la suma y la media aritmética.
   Por: [Franklin Bracamonte]
   Para: [Programación I-UBA]
*/

#include <iostream>
#include <vector>

int main() {
    // Declaración del vector para almacenar los números
    std::vector<int> numeros(10);

    // Lectura de los 10 números enteros
    std::cout << "Ingrese 10 números enteros:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << "Número " << i+1 << ": ";
        std::cin >> numeros[i];
    }

    // Calcular la suma de los números
    int suma = 0;
    for (int num : numeros) {
        suma += num;
    }

    // Calcular la media aritmética
    double media = static_cast<double>(suma) / numeros.size();

    // Mostrar la suma y la media
    std::cout << "La suma de los números es: " << suma << std::endl;
    std::cout << "La media aritmética es: " << media << std::endl;

    // Esperar a que el usuario presione una tecla antes de cerrar
    std::cout << "Presione una tecla para salir...";
    std::cin.get();

    return 0;
}
