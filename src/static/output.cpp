#include "output.h"

class out;
char out::the_buf[buf_size];

void
out::print(const char * format, ...){
    va_list ptr;
    va_start(ptr, format);
    vsnprintf(the_buf, buf_size, format, ptr);
    std::cout << the_buf;
    the_buf[0] = '\0';
}

void
out::cat(char * to, const char * from){
    if (strlen(to) + strlen(from) < buf_size) {
        strcat(to, from);
    }
}