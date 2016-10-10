#include <stdio.h>
int main(){
	int A,B,C,T;
		printf("Input three numbers:");
		scanf("%d%d%d",&A,&B,&C);
		if(A<B){
			T=A;A=B;B=T;
		}
		if(A<C){
			T=A;A=C;C=T;
		}
		if(B<C){
			T=B;B=C;C=T;
		}
		printf("%d%d%d",A,B,C);
} 
