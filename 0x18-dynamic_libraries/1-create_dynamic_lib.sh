#!/bin/bash
gcc -c $(ls *.c | grep -v "div.c") -fPIC
gcc *.o -shared -o liball.so
