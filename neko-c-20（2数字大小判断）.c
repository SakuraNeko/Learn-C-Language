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
		{printf("X=%.2f\n",X);
		}
		else if (Y>X)
		{printf("Y=%.2f\n",Y);
		}
		else
		{printf("X=Y=%.2f\n",Y);
		}
	}
}
