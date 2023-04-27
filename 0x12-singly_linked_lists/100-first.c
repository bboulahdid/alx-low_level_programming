#include <stdio.h>

/**
 * exec_me_before_main - executed before main function
 */
void __attribute__((constructor)) exec_me_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

