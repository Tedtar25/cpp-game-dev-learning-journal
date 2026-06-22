// Consola C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/*
| Tipo          | Sirve para             | Ejemplo                     |
| ------------- | ---------------------- | --------------------------- |
| `int`         | Números enteros        | vida, ataque, defensa       |
| `float`       | Números con decimal    | velocidad, daño crítico     |
| `double`      | Decimales más precisos | distancia, cálculos grandes |
| `char`        | Un solo carácter       | rango, letra                |
| `bool`        | Verdadero o falso      | vivo/muerto, tieneLlave     |
| `std::string` | Texto                  | nombre del jugador          |

Para usar std::string, ocupamos agregar:
#include <string>
*/



// #####################################################
// ##CAPITULO 2 - CAPITULO 2 - CAPITULO 2 - CAPITULO 2##
// #####################################################

/*
#include <iostream>
#include <string>
*/

//Primer ejemplo: estadísticas con variables
/*
int main() {
    std::string nombre = "Mago";
    int hp = 100;
    int ataque = 20;
    int defensa = 10;

    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "HP: " << hp << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
    std::cout << "Defensa: " << defensa << std::endl;

    return 0;

}
*/

//Entrada de usuario con std::cin
/*
int main() {
    std::string nombre;

    std::cout << "Escribe el nombre del personaje: ";
    std::cin >> nombre;

    std::cout << "Bienvenido, " << nombre << std::endl;

    return 0;
}
*/
/*
int main() {
    std::string nombre;
    int hp;
    int ataque;
    int defensa;

    std::cout << "=== CREACION DE PERSONAJE ===" << std::endl;
    std::cout << "Nombre del personaje: " << std::endl;
    std::cin >> nombre;
    std::cout << "Vida Inicial: " << std::endl;
    std::cin >> hp;
    std::cout << "Puntos de ataque: " << std::endl;
    std::cin >> ataque;
    std::cout << "Puntos de defensa" << std::endl;
    std::cin >> defensa;

    std::cout << std::endl;
    std::cout << "=== PERSONAJE CREADO ===" << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "HP: " << hp << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
    std::cout << "Defensa: " << defensa << std::endl;

    return 0;
}
*/

//Ejercicio 1: Datos de personaje
/*
int main() {
    std::string name = "Eldricksen";
    std::string character_class = "Mago";
    int hp = 100;
    int mana = 100;
    int attack = 20;
    int defense = 10;
    int character_level = 2;

    std::cout << "=== FICHA DE PERSONAJE ===" << std::endl;
    std::cout << "Nombre :" << name << std::endl;
    std::cout << "Clase: " << character_class << std::endl;
    std::cout << "HP: " << hp << std::endl;
    std::cout << "Mana: " << mana << std::endl;
    std::cout << "Ataque: " << attack << std::endl;
    std::cout << "Defensa: " << defense << std::endl;
    std::cout << "Nivel de personaje: " << character_level << std::endl;

    return 0;
}
*/

//EJERCICIO 2 - Personaje creado por el usuario
/*
int main() {
    std::string name;
    std::string character_class;
    int hp;
    int attack;
    int defense;

    std::cout << "=== CREACION DE PERSONAJE ===" << std::endl;
    std::cout << "Nombre del personaje: " << std::endl;
    std::cin >> name;
    std::cout << "Clase: " << std::endl;
    std::cin >> character_class;
    std::cout << "Vida Inicial: " << std::endl;
    std::cin >> hp;
    std::cout << "Puntos de ataque: " << std::endl;
    std::cin >> attack;
    std::cout << "Puntos de defensa" << std::endl;
    std::cin >> defense;

    std::cout << std::endl;
    std::cout << "=== PERSONAJE CREADO ===" << std::endl;
    std::cout << "Nombre: " << name << std::endl;
    std::cout << "Clase: " << character_class << std::endl;
    std::cout << "HP: " << hp << std::endl;
    std::cout << "Ataque: " << attack << std::endl;
    std::cout << "Defensa: " << defense << std::endl;

    return 0;
}
*/

//EJERCICIO 3 - Monedas y tienda
/*
int main() {
    int monedas = 100;
    int precio_espada = 35;

    std::cout << "Tienes " << monedas << " monedas" << std::endl;
    std::cout << "La espada cuesta " << precio_espada << std::endl;
    std::cout << "Compraste la espada" << std::endl;

    int monedas_restantes = monedas - precio_espada;

    std::cout << "Te quedan " << monedas_restantes << " monedas" << std::endl;

    return 0;
}
*/

//Mini reto: Menú dinámico de videojuego
/*
int main() {

    std::string player_name = "Cesar";
    int hp = 100;
    int money = 50;

    std::cout << "============================" << std::endl;
    std::cout << "         DUNGEON C++        " << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << std::endl;
    std::cout << "Jugador: " << player_name << std::endl;
    std::cout << "HP: " << hp << std::endl;
    std::cout << "Monedas: " << money << std::endl;
    std::cout << std::endl;
    std::cout << "1. Iniciar aventura" << std::endl;
    std::cout << "2. Ver personaje" << std::endl;
    std::cout << "3. Tienda" << std::endl;
    std::cout << "4. Salir" << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "Elige una opcion:" << std::endl;
    std::cout << std::endl;
    
    int option_menu;

    std::cin >> option_menu;
    std::cout << "Opcion seleccionada: " << option_menu << std::endl;

    return 0;
}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////

// #####################################################
// ##CAPITULO 1 - CAPITULO 1 - CAPITULO 1 - CAPITULO 1##
// #####################################################

//#include <iostream>
//int main() {
    //std::cout << "Hola, mundo. Estoy aprendiendo C++ para videojuegos." << std::endl;
    //return 0;
//}

/*
#include <iostream>

int main() {
    std::cout << "=================" << std::endl;
    std::cout << "     MINI RPG    " << std::endl;
    std::cout << "=================" << std::endl;

    std::cout << "Jugador creado correctamente" << std::endl;
    std::cout << "Vida inicial: 100" << std::endl;
    std::cout << "Ataque inicial: 15" << std::endl;

    return 0;
}
*/

// EJERCICIO 1 - Imprime tu propio mensaje:
/*
int main() {
    std::cout << "Hola soy Cesar y estoy aprendiendo C++" << std::endl;
    
    return 0;
}

//EJERCICIO 2 - Haz una pantalla de inicio para un juego inventado.
int main() {
    std::cout << "===============================" << std::endl;
    std::cout << "         LONELY SPACE          " << std::endl;
    std::cout << "===============================" << std::endl;
    std::cout << "Presiona ENTER para iniciar...." << std::endl;

    return 0;
}

//EJERCICIO 3 - Imprime estadísticas de un personaje:
int main() {
    std::cout << "Nombre: Mago" << std::endl;
    std::cout << "HP: 100" << std::endl;
    std::cout << "Ataque: 20" << std::endl;
    std::cout << "Defensa: 10" << std::endl;

    return 0;
}
*/

/*
//Mini reto del capítulo
int main() {
    std::cout << "==============================" << std::endl;
    std::cout << "         DUNGEON C++          " << std::endl;
    std::cout << "==============================" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "1. Nueva Partida" << std::endl;
    std::cout << "2. Cargar Partida" << std::endl;
    std::cout << "3. Opciones" << std::endl;
    std::cout << "4. Salir" << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Selecciona una opcion:" << std::endl;

    return 0;
}
*/


