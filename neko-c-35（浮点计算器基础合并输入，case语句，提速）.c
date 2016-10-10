#include <stdio.h>
int main(){
	float a,b;
	char C1;
	printf("Input a number op and onther number:");
	scanf("%f%c%f",&a,&C1,&b);
	switch(C1){
		case '+':printf("%.2f+%.2f=%.2f\n",a,b,(a+b));break; 
		case '-':printf("%.2f-%.2f=%.2f\n",a,b,(a-b));break;
		case '*':printf("%.2f*%.2f=%.2f\n",a,b,(a*b));break;
		case '/':printf("%.2f/%.2f=%.2f\n",a,b,(a/b));break;
		default :printf("Error!") ;	
	}
}
