Variadic Functions
these are functions that can take up a variable number of arguments.
They are declaired by writing the function name with at least one required argument and the an elipses to indicate the optional variable
Since the number of arguments is not fixed at the declaration stage, the optional arguments are accessed sequential by used of macros supplied in the stdargs
header file.

data type: va_list is the type used for declairing argument pointer variables
macro: void va_start - initializes the argument pointer variable to point to the	fist optional argument of the current function.
va_args: returns the value of the next optional argument and modifies the value		of the argument pointer to point to the subsequent argument
va_end: it ends the use of the argument pointer