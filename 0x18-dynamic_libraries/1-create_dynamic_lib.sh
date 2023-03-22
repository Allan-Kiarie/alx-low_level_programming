#!/bin/bash
gcc -fpic -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
