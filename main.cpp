#include "core.h"

#include <stdio.h>
#include <iostream>



int main(int argc, char** argv)
{

    Tensor<Air> tensor(3, 3, 1);

    for(int i = 0; i < tensor.getLength(); i++)
    {
        Air ap = tensor.data[i];
        std::cout << ap.getName() << ": " << ap.getId() << std::endl;
    }



    return 0;
}