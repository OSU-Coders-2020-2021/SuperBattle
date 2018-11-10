/*
 * Tristan Hilbert
 * 11/10/2018
 * Character Class Source File
 * 
 */

#include "Character.hpp"

const int flavor_text_length = 4;

Character::Character(): flavor_text(new std::string[flavor_text_length]){}
Character::~Character(){
    delete [] this->flavor_text;
}

std::string Character::get_flavor_text(int n){
    if(n >= 0 || n < flavor_text_length){
        return this->flavor_text[n];
    }else{
        return std::string("Error You Scoundrel!");
    }
}
void Character::set_flavor_text(int n, std::string a){
    if(n >= 0 || n < flavor_text_length){
        if(a.length() != 0)
            this->flavor_text[n] = a;
    }
}