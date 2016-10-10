#include <stdio.h>
int main(){
	float X,Y,MAX;
		printf("Input two numbers:");
		scanf("%f%f",&X,&Y);
		if(X>Y){
			MAX=X;
		}
		if(Y>X){
			MAX=Y;
		}
		printf("Max is %.2f",MAX);
} 
