#include "tensor.h"
#include <vector>

template<typename T>
Tensor<T>::Tensor(int x, int y, int z) : size_x(x), size_y(y), size_z(z), data(x*y*z), length(x*y*z)
{
    
}

template<typename T>
Tensor<T>::Tensor() : size_x(0), size_y(0), size_z(0), data(0), length(0)
{

}

template<typename T>
int Tensor<T>::getLength()
{
    return this->length;
}