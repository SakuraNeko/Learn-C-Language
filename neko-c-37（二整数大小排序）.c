#include <stdio.h>
int main(){
	int X,Y,T;
		printf("Input two numbers:");
		scanf("%d%d",&X,&Y);
		if(X<Y){
			T=X;X=Y;Y=T;
		}
		
		printf("%d%d",X,Y);
} 
