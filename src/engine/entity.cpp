#include "entity.h"

entity::entity(){
    the_x = 0;
    the_y = 0;
    the_dx = 0;
    the_dy = 0;
}

entity::entity(int x, int y){
    the_x = x;
    the_y = y;
    the_dx = 0;
    the_dy = 0;
}

void 
entity::x(int x){
    the_x = x;
}

void  
entity::y(int y){
    the_y = y;
}

void  
entity::dx(int dx){
    the_dx = dx;
}

void  
entity::dy(int dy){
    the_dy = dy;
}

int
entity::x(){ return the_x; }

int
entity::y(){ return the_y; }

int
entity::dx(){ return the_dx; }

int
entity::dy(){ return the_dy; }


