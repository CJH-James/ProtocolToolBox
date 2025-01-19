#ifndef _OPERATE_ARGUMENT_H_
#define _OPERATE_ARGUMENT_H_

#include <stdbool.h>

/**
 * @brief The structure define the arguments
 * 
 */
typedef struct _argument sArgument;
struct _argument
{
    bool necessary;       // this argument is nessary for executing program
    char *option;         // the option, -i, -s, -d ... something likes that
    char *val;            // -i "interface" <-- the value after option
    char *default_val;    // The default value when no input argument
    sArgument* next_argv; // The pointer to next argument structure 
}; 

/**
 * @brief The structure define the arguments
 * 
 * @param argument The structure of the argument
 */
void printArgument(sArgument argument);

#endif /* _OPERATE_ARGUMENT_H_ */