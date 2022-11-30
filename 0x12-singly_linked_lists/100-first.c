#include <stdio.h>

void myCfunctin(void) __attribute__ ((constructor));

/**
 * myCfunctin - prints a sentence before the main
 * function is executed
 */
void myCfunctin(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
