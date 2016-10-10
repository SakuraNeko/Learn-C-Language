#include <stdio.h>
#include <math.h>
main()
{
	while(1)
	
	{
	float X,Y;
	printf("Inport a real number: ");
	scanf("%f",&X);
	if(X<-1)
	{
		Y=X*X-1;
	}
	if((X>=-1)&&(X<=1))
	{
		Y=sqrt(1-X*X);
	}
	if(X>1)
	{
		Y=log10(X)/log10(2);
	}
	printf("Y=%.2f\n",Y);
	getch();
	}
}
