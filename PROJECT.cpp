/* Programa que visualiza la primera, quinta y última letra de un arreglo de tamaño 15 de forma secuencial.
   Por: [Franklin Bracamonte]
   Para: [Programación I-UBA]
*/

#include <iostream>

int main() {
    // Declaración del arreglo de tamaño 15
    char arreglo[15] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o'};

    // Mostrar la primera letra del arreglo
    std::cout << "Primera letra del arreglo: " << arreglo[0] << std::endl;

    // Mostrar la quinta letra del arreglo
    std::cout << "Quinta letra del arreglo: " << arreglo[4] << std::endl;

    // Mostrar la última letra del arreglo
    std::cout << "Última letra del arreglo: " << arreglo[14] << std::endl;

    // Esperar a que el usuario presione una tecla antes de cerrar
    std::cout << "Presione una tecla para salir...";
    std::cin.get();

    return 0;
}
