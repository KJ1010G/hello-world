#include<stdio.h>
#include"kjcommon.h"

int
main(int argc, char *argv[])
{
	char c;
	int e,op;
	int *error=&e;
	while(*++argv){
		 if( (c=**argv)>='0' && c<='9' ){
		 	push(stringtoint(*argv,error));
		 }
		 else{
		 	switch(c){
		 		case '+':
		 			push(pop(error)+pop(error));
		 			break;
		 		case '-':
		 			op=pop(error);
		 			push(pop(error)-op);
		 			break;
		 		case '*':
		 			push(pop(error)*pop(error));
		 			break;
		 		case '/':
		 			if(op=pop(error)){
		 				push(pop(error)/op);
		 			}
		 			else{
		 				printf("error: division by zero\n");
		 				return -1;
		 			}
		 			break;
		 		default:
		 			printf("error: invalid input\n");
		 			return -1;
		 			break;
		 	}
		 }
	}
	printf("%d\n",pop(error));
}
