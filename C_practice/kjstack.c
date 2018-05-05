#include<stdio.h>

#define MAXI 100
static int stack[MAXI];
static int top=0; // Next free index position
void push(int v)
{
	if(top<MAXI){
		stack[top++]=v;
	}
	else{
		printf("error:push fail, stack full\n");
	}
}

int pop(int *error) // 'error' is set to 1 if stack empty, 0 otherwise
{
	*error=0;
	if(top<=0){
		printf("error:pop fail, stack empty IGNORE RETURN VALUE\n");
		*error=1;
		return -1;
	}
	else{
		return stack[--top];
	}
}
