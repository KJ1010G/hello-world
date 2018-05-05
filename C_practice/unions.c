#include<stdio.h>

int
main(void)
{
	union {
		int i;
		float f;
		char *name;
	} u;
	u.i = 5;
	
}
