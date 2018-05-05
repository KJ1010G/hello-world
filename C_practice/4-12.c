#include<stdio.h>
#define LIM 20

void itoakj(int d, char s[], int base, int x);

int
main(void)
{
	int d=128;
	char s[LIM];
	int base=2;
	itoakj(d,s,base,0);
	printf("\n%s\n",s);
	return 0;
}

void itoakj(int d, char s[], int base, int x)
{
	static int i=0;
	if(d>=base){
		itoakj(d/base , s , base , x+1);
	}
	if(i<LIM-1){
		s[i++]=(d%base)+'0';
	}
	if(x==0){
		s[i]='\0';
	}
}
