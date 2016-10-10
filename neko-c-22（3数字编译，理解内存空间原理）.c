#include <stdio.h>
main()
{
	float X,Y,Z;
	for(;;){
		printf("Inport number X:");
		scanf("%f",&X);
		printf("Inport number Y:");
		scanf("%f",&Y);
		printf("Inport number Z:");
		scanf("%f",&Z);
		if(Y>X)
		{X=Y;
		}
		if(Z>X)
		{X=Z;
		}
		printf("Big one is=%.2f\n",X);
	}
}
