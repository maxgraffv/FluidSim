#include "Material.h"

int Material::count = 0;

Material::Material()
{
    this->id = this->count++;
}

