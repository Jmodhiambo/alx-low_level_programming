#!/bin/bash
gcc -shared -fPIC -o win.so win.c -ldl
export LD_PRELOAD=$PWD/win.so
