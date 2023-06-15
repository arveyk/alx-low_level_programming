/* Dynamically allocated Memory Part 2 */

Is type-casting important when allocating memory by calls to malloc?

Those that know their stuff say it is not since
	* the pointer will automatically be promoter (converted to the needed 
	type.
	* casting may lead to problems which are hard to debugg
	* It makes code verbose

We will, for these reasons try to avoid type-casting


