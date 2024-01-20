#!/bin/bash

# Compile C files into a shared library
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o
