#ifndef AIR_H
#define AIR_H

#include "Material.h"
#include <string>
#include <cmath>

class Air : Material
{
    private:

        void init()
        {
            this-> name = std::string("Air");

            this->density = 1.204;
            this->mass = 1.204;
            this->volume = 0.022414;
            this->viscosity = 1.81 * pow(10, -5);
            this->pressure = 101.325;
            this->temperature = 293.15;

            this->velocity = 0;
            this->velocity_vec_x = 0;
            this->velocity_vec_y = 0;
            this->velocity_vec_z = 0;

            float pos_x = 0;
            float pos_y = 0;
            float pos_z = 0;

            float center_x = 0;
            float center_y = 0;
            float center_z = 0;

        }



    public:
        Air()
       



};





#endif