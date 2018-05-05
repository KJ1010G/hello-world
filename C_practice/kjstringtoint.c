#include<stdio.h>

int stringtoint(char *p,int *error) // 'error' is set to 1 if not a number, 0 otherwise
{
	int c,number=0;
	*error=0;
	if( !((c=(*p))>='0' && c<='9') ){
		printf("error:Not a number, IGNORE RETURN VALUE\n");
		*error=1;
		return -1;
	}
	while( (c=(*(p++)))>='0' && c<='9' ){
		number=(number*10)+(c-'0');
	}
	return number;
}
