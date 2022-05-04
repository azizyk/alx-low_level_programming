#!/bin/bash
#script to create liball.a library

gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a
