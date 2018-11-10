/*
 * Tristan Hilbert
 * 11/10/2018
 * Villain Header File
 * 
 */

#ifndef VILLAIN
#define VILLAIN
#include "Character.hpp"

class Villain: public Character{
    public:
        Villain();
        virtual ~Villain();

        virtual std::string get_name();
        virtual move_list get_move();
        int predict_villain();

    private:
        void generate_move();
        move_list move;
};

#endif