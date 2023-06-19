#!/bin/bash
gcc -fPIC -Wall *.c -shared -o libdynamic.so
chmod +x libdynamic.so
