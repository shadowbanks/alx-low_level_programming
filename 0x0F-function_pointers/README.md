Function pointers

====================================================


print_name() - Print name using a function passed a parameter to another function


array_iterator() - Exectue a function given as a parameter on each element of an array


int_index() - search for an integer in an array, using a function passed as parameter to check if integer is found

3-main.c() - A simple calculator with the following functions
	+: addition
	-: subtraction
	*: multiplication
	/: division
	%: modulo

Files needed
=============
- 3-main.c
- 3-op_functions.c
- 3-get_op_func.c
- 3-calc.h

Usage
=========
Compile using: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc

Run program using: ./calc num1 operator num2
