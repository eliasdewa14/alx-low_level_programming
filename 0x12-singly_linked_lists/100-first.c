#include <stdio.h>

/* Apply the constructor attribute to excute before main() */

void myFirstFun(void) __attribute__ ((constructor));

/**
 * myFirstFun - a constructor function that print before main()
 *
 * Return: Nothing
 */
void myFirstFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
