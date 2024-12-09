#include "core.h"

#include <stdio.h>



int main(int argc, char** argv)
{

    Tensor<Air> tensor = Tensor<Air>(5, 5, 5);

    for(int i = 0; i < tensor.getLength(); i++)
    {
        Air* ap = tensor.data[i];
        printf("%s: %d\n", ap->name, ap->id);
    }



    return 0;
}