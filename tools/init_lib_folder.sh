#!/bin/bash

### Create Lib folder structure

# include
# ├── basic
# │   ├── CMakeLists.txt
# │   ├── header
# │   │   └── operateArgument.h
# │   └── src
# │       └── operateArgument.c


# show help
help()
{
    printf "\nUsage:\n"
    printf "  $(basename "$0") [LIB_NAME]\n"
    printf "\n"
    printf "  Example: $(basename "$0") log\n"
}

if [ ! -z "$1" ] ;then

    LIB_NAME=include/$1

    echo "Create $LIB_NAME"
    mkdir -p $LIB_NAME || exit 1

    echo "Create $LIB_NAME/header"
    mkdir -p $LIB_NAME/header || exit 1

    echo "Create $LIB_NAME/src"
    mkdir -p $LIB_NAME/src || exit 1

    echo "Create $LIB_NAME/CMakeLists.txt"
    touch $LIB_NAME/CMakeLists.txt || exit 1

    echo "done"
else
    help
fi

exit 1
