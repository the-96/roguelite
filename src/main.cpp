#include "includes.h"

int main(){
    entity e;
    e.x(120);
    e.y(122);
    out::print("%d\t%d\t%d\n",e.x(),e.y(),e.dx());
}
