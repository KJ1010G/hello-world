#include<stdio.h>
#define LIM 1000

int strendd(char *s,char *t);

int
main(void)
{	int c;
	char a[100]="My name is Kashish Jain.";
	char b[]="hi, My name is Kashish Jain.";
	printf("%s\n%s\n\n",a,b);
	if( (c=strendd(a,b)) ){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	if(c==-1){
		printf("Its complicated\n");
	}
	return 0;
}

int strendd(char *s,char *t)
{
	char *a=t,*b=s;
	while(*s){
		s++;
	}
	while(*t){
		t++;
	}
	while( (*(t--)==*(s--)) ){
		if(t==a){
			return 1;
		}
		if(s==b){
			return -1;
		}
	}
	return 0;	
}
