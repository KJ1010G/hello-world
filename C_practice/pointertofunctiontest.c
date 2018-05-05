#include<stdio.h>

void ronaldo(void);
void messi(void);
void kj(void);
void (*comp)(void);

int
main(int argc, char *argv[])
{
	argv++;
	while(--argc){
		if( (*(argv))[0]=='-' && (*(argv))[2]=='\0' ){
			switch( (*(argv++))[1] ){
				case 'r':
					comp=ronaldo;
					break;
				case 'm':
					comp=messi;
					break;
				default:
					comp=kj;
					break;
			}
			(*comp)();
		}
		else{
			printf("%s ", (*(argv++)) );
		}
	}
	putchar('\n');
	return 0;
}

void ronaldo(void)
{
	printf("Cristiano Ronaldo ");
}

void messi(void)
{
	printf("Lionel Messi ");
}

void kj(void)
{
	printf("KJ ");
}
