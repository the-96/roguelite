#ifndef ENTITY_H
#define ENTITY_H

class entity {
    int the_x;
    int the_y;
    int the_dx;
    int the_dy;
    public:
        entity(int x, int y);
        entity();
        void x(int num);
        void y(int num);
        void dy(int num);
        void dx(int num);
        int y();
        int x();
        int dy();
        int dx();
};

#endif