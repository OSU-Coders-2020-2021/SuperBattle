/*
 * Tristan Hilbert
 * 11/10/2018
 * Game Header File
 * 
 */

#ifndef GAME
#define GAME
#include "Character.hpp"

void battle();
void move(Character **, move_list[], int);
void resolve(move_list[], int[], int[]);

#endif