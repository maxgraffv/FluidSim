#ifndef TENSOR_H
#define TENSOR_H

#include <vector>

template <typename T>
class Tensor
{

    private:

        int size_x;
        int size_y;
        int size_z;

        int length;



    public:

        /*
            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

            AT THE MOMENT TENSOR IS 3D ONLY

            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        */

        std::vector<T> data;

        Tensor(int x, int y, int z);

        T* get(int x, int y, int z);
        void set(int x, int y, int z, T t);
        void setAll(T t);
        int getLength();
         








};

#include "tensor.tpp"



#endif