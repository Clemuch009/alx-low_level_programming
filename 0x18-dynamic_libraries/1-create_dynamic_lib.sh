#!/bin/bash

gcc -Wall -fPIC -c *.c

gcc -shared -Wl,-soname,libdynamic.so -o libdynamic.so *.o
