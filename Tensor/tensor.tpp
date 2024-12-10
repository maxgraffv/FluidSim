#include "tensor.h"
#include <vector>

template<typename T>
Tensor<T>::Tensor(int x, int y, int z) : size_x(x), size_y(y), size_z(z), data(x*y*z), length(x*y*z)
{
    
}

template<typename T>
int Tensor<T>::getLength()
{
    return this->length;
}