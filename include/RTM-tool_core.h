#include <stdio.h>

class position {
    public:
        enum position_type {minecraft, real};
        position(position_type type, float x, float y);
        struct p{
            float p1;
            float p2;
        };
        p get_minecraft();
        p get_real();
    private:
        float p1, p2; //save by real position
};

class angle {
    public:
        enum angle_type {minecraft, real};
        angle(angle_type type, float degree);
        float get_minecraft();
        float get_real();
    private:
        float degree; //save by real degree
};

class svg{
    public:
        svg(char* path, int width, int height);
        void writedata(char* data);
        void save();
    private:
        void initial(int width, int height);
        FILE *F;
};