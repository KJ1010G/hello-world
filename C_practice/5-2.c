#include<ctype.h>

int getch(void);
void ungetch(int);

int getfloat(float *pn)
{
	int c,
	float sign,t=1.0;
	while(isspace(c=getch())){
		;
	}
	if( (!isdigit(c)) && (c!=EOF) && (c!='+') && (c!='-') && (c!='.') ){
		ungetch(c); /*Not a number*/
		return 0;
	}
	sign=( (c=='-')?(-1):(1) );
	if((c=='+')||(c=='-')){
		if(!isdigit(c=getch())){
			ungetch(c);
			return 0;
		}
	}
	for(*pn=0.0 ; isdigit(c) ; c=getch()){
		*pn= (10 * (*pn)) + (c-'0') ;
	}
	if(c=='.'){
		c=getch();
		for( ; isdigit(c) ; c=getch()){
			*pn= (10 * (*pn)) + (c-'0') ;
			t *= 10.0;
		}
	}
	*pn *= sign;
	*pn /= t;
	if(c!=EOF){
		ungetch();
	}
	return c;
}
