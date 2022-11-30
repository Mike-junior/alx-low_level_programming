#include<stdio.h>

/**
 * 
 myCfunction- Apply the constructor attribute to myCfunction() so that it
 *   is executed before main()
 */
void
myCfunction(void) __attribute__ ((constructor));

/**
 * 
 myCfunction- implementation of myCfunction
 */
void 
myCfunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
