/*
 * Tristan Hilbert
 * 11/10/18
 * Villain Source File
 * 
 */

#include "Villain.hpp"
#include <cstdlib>

const std::string name = "Super Mysterio!!!";
Villain::Villain(): Character(){
    this->set_flavor_text(0, "He uses his mysterious WHIP!");
    this->set_flavor_text(1, "He uses his magical HOP!");
    this->set_flavor_text(2, "Mysterio SPREADS HIS MAGICAL ESSENCE ON THE WHIP");
    this->set_flavor_text(3, "Mysterio decides to take a small breath in all this madness...");
    this->generate_move();
}
Villain::~Villain(){}

std::string Villain::get_name(){
    return name;
}

move_list Villain::get_move(){
    int var = this->move;
    this->generate_move();
    return move_list(var);
    
}

int Villain::predict_villain(){
    return this->move;
}
void Villain::generate_move(){
    this->move = move_list(rand() % 4);
}

