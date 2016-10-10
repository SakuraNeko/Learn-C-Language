#include <stdio.h>
main()
{
	float X,Y;
	for(;;){
		printf("Inport number X:");
		scanf("%f",&X);
		printf("Inport number Y:");
		scanf("%f",&Y);
		if(Y<X)
		{Y=X;
		}
		else if (Y>X)
		{X=Y;
		}
		else
		{printf("X=Y=%.2f\n",Y);
		}
		printf("Big one is=%.2f\n",X);
	}
}
