#include	<main.h>
#include	<stdio.h>

/**
 * main.c - check the code
 *
 * return: Always 0.
 */

int	main(void)
{
	int n;
	n	=	402;
	printf("%d\n",	n);
	reset_to_98(&n);
	printf("n=%d\n",	n);
	return	0;
}
