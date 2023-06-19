#!/bin/bash
gcc -fPIC -Wall *.c -shared -o liball.so
chmod +x liball.so
