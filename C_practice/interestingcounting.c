//counting the occurrences of all the words in some input
#include<stdio.h>

#define LIM 1000 // max characters storage
#define MAXWORDS 500 //maximum words

char store[LIM];
int i=0;	//Next free storage

struct words {
	char *p=NULL;
	struct words *left=NULL;
	struct words *right=NULL;
	int count=0;                           
}word[MAXWORDS];
int w=0;	//Next free word pointer

int
main(void)
{
	struct words *node=word,*pword=NULL,*lastpword=NULL;
	int temp=0;
	int c;
	int t=0; //used as array index
	int done=0;
	int right;
	while( (c=getchar())!=EOF ){
		if(c==' ' || c=='\t' || c=='\n'){    // if whitespace
			if(i!=0){	// if its not the very start of input
				store[i++]='\0';	
				temp=i;
				t=0;
				done=0;
				w++;
			}
			while( (c=getchar())==' ' || c=='\t' || c=='\n' ){
				;
			}
		}
		store[i]=c;
		if(temp==i){	//first letter
			word[w].p = &(store[i]);
			pword=node;
		}
		i++;
		if(done){
			continue;
		}
		if(pword==NULL){	//New word occurence
			if(right){
				lastpword->right = &(word[w]);
			}else{
				lastpword->left = &(word[w]);
			}
			done=1;
		}
		if( (pword->p)[t] == c){
			if(pword->p)[t+1]=='\0'){	// found match
				check=1;
			}
			t++;
		}else if( (pword->p)[t]>c ){
			lastpword=pword;
			pword = pword->right;
			right=1;
		}else{
			lastpword=pword;
			pword = pword->left;
			right=0;
		}
	}
}
