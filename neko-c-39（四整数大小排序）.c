#include <stdio.h>
int main(){
	float A,B,C,D,T;
		printf("Input four numbers:");
		scanf("%f%f%f%f",&A,&B,&C,&D);
		if(A<B){
			T=A;A=B;B=T;
		}
		if(A<C){
			T=A;A=C;C=T;
		}
		if(A<D){
			T=A;A=D;D=T;
		}
		if(B<C){
			T=B;B=C;C=T;
		}
		if(B<D){
			T=B;B=D;D=T;
		}
		if(C<D){
			T=C;C=D;D=T;
		}
		printf("%.2f %.2f %.2f %.2f",A,B,C,D);
} 
