#ifndef AIR_H
#define AIR_H

#include "Material.h"
#include <string>
#include <cmath>

class Air : public Material
{
    private:

        void init() override;
        



    public:
        Air();
        ~Air();
        int getId();
        std::string getName();
       



};





#endif