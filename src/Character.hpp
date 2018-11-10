/*
 * Tristan Hilbert
 * 11/10/18
 * Character Header File
 * 
 */

#ifndef CHARACTER
#define CHARACTER
#include <string>

enum move_list{
    attack=0,
    dodge,
    war_cry,
    heal
};

class Character{
    public:
        Character();
        virtual ~Character();

        virtual std::string get_name() = 0;
        std::string get_flavor_text(int);
        void set_flavor_text(int, std::string);
        virtual move_list get_move() = 0;

        private:
            std::string* flavor_text;

};

#endif