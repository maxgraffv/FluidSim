#ifndef DOMAIN_H
#define DOMAIN_H

class Domain
{
    private:
        // In Meters
        float dim_x;
        float dim_y;
        float dim_z;

        int samples; // divide domain into samples
        int sample_rate; //how many samples per second; makes delta_t 1/samplerate [sec]
        float sim_time; // simulation time in seconds



    public:
        Domain(float x, float y, float z, int s, int sr, float st);



};



#endif