#ifndef OUTPUT_H
#define OUTPUT_H
#include "stdarg.h"
#include <cstring>
#include <iostream>

#define buf_size 2048

class out {
    static char the_buf[buf_size];
    public:
        static void print(const char * format, ...);
        static void cat(char * to, const char * from);
};

#endif