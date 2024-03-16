/* Programa que permite escribir en sentido inverso una cadena de caracteres.
   Por: [Franklin Bracamonte]
   Para: [Programación I-UBA]
*/

#include <iostream>
#include <string>

int main() {
    // Declaración de la cadena de caracteres
    std::string cadena;

    // Lectura de la cadena de caracteres
    std::cout << "Ingrese una cadena de caracteres: ";
    std::getline(std::cin, cadena);

    // Mostrar la cadena en sentido inverso
    std::cout << "La cadena en sentido inverso es: ";
    for (int i = cadena.length() - 1; i >= 0; --i) {
        std::cout << cadena[i];
    }
    std::cout << std::endl;

    // Esperar a que el usuario presione una tecla antes de cerrar
    std::cout << "Presione una tecla para salir...";
    std::cin.get();

    return 0;
}
