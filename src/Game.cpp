/*
 * Tristan Hilbert
 * 11/10/18
 * Game Source File
 * This should include the Main function
 * Networking?
 * 
 */

#include "Game.hpp"
#include "Character.hpp"
#include "Villain.hpp"
#include "Hero.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
    srand(time(NULL));
    battle();
}

void battle(){
    Character** array = new Character * [2];
    int health[2] = {100, 100};
    move_list moves[2] = {attack, attack};
    int super[2] = {0, 0};
    /* Initialize Player */
    Villain * vil = new Villain();
    array[0] = vil;
    /* Initialize Villain */
    array[1] = new Hero(vil);

    /* Play Game */
    std::cout << "== Welcome to the Grand Battle! ==" << std::endl;
    while(health[0] > 0 && health[1] > 0){
        move(array, moves, 0);
        move(array, moves, 1);
        resolve(moves, health, super);
    }

    if(health[0] < health[1])
        std::cout << "THE HERO IS VICTORIOUS" << std::endl;
    else
        std::cout << "Mysterio IS THE REIGNING VICTOR!" << std::endl;
    
    /* Delete Object */
    delete array[0];
    delete array[1];
    delete [] array;
}

void move(Character ** array, move_list moves[], int index){
    std::cout << array[index]->get_name() << " takes the next move!" << std::endl;
    moves[index] = array[index]->get_move();
    std::cout << array[index]->get_flavor_text(int(moves[0])) << std::endl;
    std::cout << "============================\n" << std::endl;
}

void resolve(move_list moves[], int health[], int super[]){
    int other;
    for(int i = 0; i < 2; i ++){
        other = (i + 1) % 2;
        if(moves[i] == attack && moves[other] != dodge){
            if(super[i] == 1){
                health[other] -= 40;
                super[i] = 0;
            }else
                health[other] -= 20;
        }
        else if(moves[i] == heal){
            health[i] += 10;
        }
        else if(moves[i] == war_cry){
            super[i] = 1;
        }
    }
    std::cout << "Here are the new Stats!" << std::endl;
    std::cout << "== Health ==\n"
              << "Villain: " << health[0] << " Hero:" << health[1] 
              << "\n====="
              << "== Readied Blow ==\n"
              << "Villain: " << (super[0] ? "Readied!" : "Not Ready...")
              << "Hero: " << (super[1] ? "Readied!" : "Not Ready...")
              << "===\n" << std::endl;
}