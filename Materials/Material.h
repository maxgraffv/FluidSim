#ifndef MATERIAL_H
#define MATERIAL_H

#include <stdio.h>

class Material
{
    private:
        virtual void init() = 0; // will initialize values for each material

    public:
        float density;
        float mass;
        float volume;
        float viscosity;
        float pressure;

        float velocity;
        float velocity_vec_x;
        float velocity_vec_y;
        float velocity_vec_z;

        float pos_x;
        float pos_x;
        float pos_x;

        float center_x;
        float center_y;
        float center_z;

        Material();


};


#endif