#!/bin/bash
#a script that excutes liball.a library

gcc -c -Wall -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a

