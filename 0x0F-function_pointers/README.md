POINTER VARIABLES
Function Pointers
These are pointer to functions. They store the address of the first byte of code
of a fucntion, not the address of a variable that stores data( as normal pointers do).
They also cannot be use for dynamic memory allocation.
Declaring function pointers
	  can be declared in this manner
	  retun_type ( *fun_ptr_name)(var1, var2...);

To point to a function the pointer can be inintialized as so
   (* fun_ptr)(int, int) = &func; /* when declairing the pointer */
   or
   ( *fun_ptr)(int, int);
   fun_ptr  =  &fun;
   or
   fun_ptr = fun

to call the function through the pointer
  (*fun_ptr)(a, b);
  or
  fun_ptr(a, b);

The paremeters are optional.