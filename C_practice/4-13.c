#include<stdio.h>
#define LIM 100

void reversekj(char []);

int
main(void)
{
	char s[LIM];
	int c;
	int i;
	for(i=0 ; i<LIM-1 && (c=getchar())!=EOF ; i++){
		s[i]=c;
	}
	s[i]='\0';
	printf("\nYour String:\n%s",s);
	reversekj(s);
	printf("\nReversed String:\n%s\n",s);
	return 0;
}

void reversekj(char s[])
{
	static int i=0;
	int temp;
	if(s[i]=='\0'){
		i=0;
		return;
	}
	temp=s[i++];
	reversekj(s);
	s[i++]=temp;
}
