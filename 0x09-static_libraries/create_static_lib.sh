#!/bin/bash
ls *.c | xargs gcc -c
ar rcs liball.a *.o
 
