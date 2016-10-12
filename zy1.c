#include <stdio.h>
int main(){
	int A,B,C,T;
		while(scanf("%d %d %d",&A,&B,&C) != EOF){
		if(A<B){
			T=A;A=B;B=T;
		}
		if(A<C){
			T=A;A=C;C=T;
		}
		if(B<C){
			T=B;B=C;C=T;
		}
		printf("%d %d %d\n",C,B,A);
	}
} 
