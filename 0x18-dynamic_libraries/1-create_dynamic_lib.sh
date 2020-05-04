#!/bin/bash
gcc -fPIC -c *.c
ld -o liball.so *.o -sherd
