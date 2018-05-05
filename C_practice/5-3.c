#include<stdio.h>
#define LIM 1000

void strcatt(char *s,char *t);

int
main(void)
{
	char a[100]="My name is Kashish Jain.\n";
	char b[]="I got great potential.";
	printf("%s%s\n\n",a,b);
	strcatt(a,b);
	printf("%s\n",a);
	return 0;
}

void strcatt(char *s,char *t)
{
	while(*s){
		s++;
	}
	while( (*(s++)=*(t++)) ){
		;
	}
}
