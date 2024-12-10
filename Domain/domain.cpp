#include "domain.h"

Domain::Domain(float x, float y, float z, int s, int sr, float st) 
    : dim_x(x), dim_y(y), dim_z(z), samples(s), sample_rate(sr), sim_time(st)
{
    this->tensor = Tensor<Air>( samples, samples, samples );

    

}