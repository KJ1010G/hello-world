#include<stdio.h>

#define SWAP(T,X,Y)	{ \
				T temp; \
				temp = X; \
				X = Y; \
				Y = temp; \
			}

int
main()
{
	int x=6,y=7;
	float a=6.0,b=7.0;
	printf("before swap: x=%d,y=%d...a=%f,b=%f\n",x,y,a,b);
	SWAP(int,x,y)
	SWAP(float,a,b)
	printf("after swap: x=%d,y=%d...a=%f,b=%f\n",x,y,a,b);
	return 0;
}
