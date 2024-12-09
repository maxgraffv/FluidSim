#ifndef TENSOR_H
#define TENSOR_H

#include <vector>

template <typename T>
class Tensor
{

    private:



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
         








};





#endif