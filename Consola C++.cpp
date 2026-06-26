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
// ##CAPITULO 3 - CAPITULO 3 - CAPITULO 3 - CAPITULO 3##
// #####################################################


// Prototipos de funciones
//
// A partir de aqui por simplicidad dejare un solo codigo pero se haran varios commits con los cambios.

#include <iostream>
#include <string>

void show_main_title();
void show_game_menu();
void show_character_info(std::string name, int hp, int attack, int defense);
void show_game_store();
int calculate_damage(int attack, int defense);
int attack_enemy(int enemy_hp, int damage);


int main() {

    //Personaje Principal

    std::string character_name = "Frodo";
    int character_hp = 100;
    int character_attack = 15;
    int character_defense = 10;

    //Personaje Enemigo - Goblin
    
    std::string enemy_goblin_name = "Goblin";
    int enemy_goblin_hp = 50;
    int enemy_goblin_defense = 5;

    int option;

    //Programa Principal

    show_main_title();
    show_game_menu();

    std::cout << "Elige una opcion: ";
    std::cin >> option;

    if (option == 1) {
        std::cout << "Iniciando aventura..." << std::endl;
        std::cout << std::endl;
        std::cout << character_name << " ataca a " << enemy_goblin_name << std::endl;

        int damage_to_enemy = calculate_damage(character_attack, enemy_goblin_defense);

        std::cout << "Danio causado: " << damage_to_enemy << std::endl;

        enemy_goblin_hp = attack_enemy(enemy_goblin_hp, damage_to_enemy);

        if (enemy_goblin_hp <= 0) {
            std::cout << enemy_goblin_name << " ha sido derrotado." << std::endl;
        }
        else {
            std::cout << "HP restante de " << enemy_goblin_name << ": " << enemy_goblin_hp << std::endl;
        }
        
    }
    else if (option == 2) {
        show_character_info(character_name, character_hp, character_attack, character_defense);
    }
    else if (option == 3) {
        show_game_store();
    }
    else if (option == 4) {
        std::cout << "Saliendo a escritorio..." << std::endl;
    }
    else {
        std::cout << "Seleccion invalida" << std::endl;
    }

    return 0;
}

void show_main_title() {
    std::cout << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "         DUNGEON C++        " << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << std::endl;
}

void show_game_menu() {
    std::cout << std::endl;
    std::cout << "1. Iniciar aventura" << std::endl;
    std::cout << "2. Ver personaje" << std::endl;
    std::cout << "3. Tienda" << std::endl;
    std::cout << "4. Salir" << std::endl;
    std::cout << std::endl;
}

void show_character_info(std::string name, int hp, int attack, int defense) {
    std::cout << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << "        INFO        " << std::endl;
    std::cout << "====================" << std::endl;
    std::cout << std::endl;
    std::cout << "Nombre: " << name << std::endl;
    std::cout << "HP: " << hp << std::endl;
    std::cout << "Ataque: " << attack << std::endl;
    std::cout << "Defensa: " << defense << std::endl;
    std::cout << std::endl;
}

void show_game_store() {
    std::cout << std::endl;
    std::cout << "===== TIENDA =====" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Pocion de vida - 20 monedas" << std::endl;
    std::cout << "2. Espada basica - 50 monedas" << std::endl;
    std::cout << "3. Escudo de madera - 35 monedas" << std::endl;
    std::cout << std::endl;
}

int calculate_damage(int attack, int defense) {
    int damage = attack - defense;

    if (damage < 0) {
        damage = 0;
    }

    return damage;
}

int attack_enemy(int enemy_hp, int damage) {
    enemy_hp -= damage;
    return enemy_hp;
}