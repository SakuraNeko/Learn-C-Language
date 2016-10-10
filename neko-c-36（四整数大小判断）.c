#include <stdio.h>
int main(){
	float X,Y,A,B,MAX;
		printf("Input four numbers:");
		scanf("%f%f%f%f",&X,&Y,&A,&B);
		MAX=(X>Y,X>A,X>B)?X:Y:A:B;
		printf("Max is %.2f",MAX);
} 
