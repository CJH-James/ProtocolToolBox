#include <stdio.h>


// #include "../include/operateArgument.h"
#include "header/log.h"
// #include "operateArgument.h"


int main (int argc, char *argv[])
{
    // sArgument argument = {0};

    printf("hello world\n");
    // printArgument(argument);


    log_info("hi", NO_TIMESTAMP);
    log_warn("hi", NO_TIMESTAMP);
    log_err("hi", NO_TIMESTAMP);
    log_info("hi", WITH_TIMESTAMP);
    log_warn("hi", WITH_TIMESTAMP);
    log_err("hi", WITH_TIMESTAMP);

    return 0;
}