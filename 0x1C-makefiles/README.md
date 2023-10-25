/** Make and Makefiles **/
 Make is a GNU program used to automate tasks in the command line, spacifically when creating executable, object files from source code. It is used to simplify this process by executing a makefile which has a set of rules that define actions to be done like recompiling a file

There are three important parts to a makefile
	> Target: name of the file output or 'function'
	> Dependencies: files that target requires, the sourcecode required to m	make the target file.
	> recipe: action that make executes.

Syntax;
	target: prerequisites
		recipe1,
		recipe2,
		...
