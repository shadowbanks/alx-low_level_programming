#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar -rc liball.a *.o
