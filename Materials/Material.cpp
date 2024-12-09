#include "Material.h"

int Material::count = 0;

Material::Material()
{
    this->init();
    this->id = this->count++;
}
