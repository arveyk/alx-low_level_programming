#!/bin/bash
gcc -Wall -Werror -Wextra *.c 
ar -rcs liball.a *.o
