#ifndef MATERIAL_H
#define MATERIAL_H

#include <stdio.h>
#include <string>

class Material
{
    private:
        virtual void init() = 0; // will initialize values for each material
        static int count;

    public:
        std::string name;
        int id;


        float density; //kg/m3
        float mass; // kg
        float volume; // m3
        double viscosity; // Pa*s (Pascal-seconds)
        float pressure; // Pa
        float temperature; // K

        float velocity; // m/s
        float velocity_vec_x;
        float velocity_vec_y;
        float velocity_vec_z;

        float pos_x; //m
        float pos_y; //m
        float pos_z; //m

        float center_x; //m
        float center_y; //m
        float center_z; //m

        Material();
        virtual ~Material() = default;


};


#endif