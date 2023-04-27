#include <stdio.h>

/**
 * exec_bfore_mn - this is perfromed before execution of main
 * Note: Becomes viable as a result of prior declaration of  "((constructor))"
 */

void __attribute__ ((constructor)) exec_bfore_mn()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
