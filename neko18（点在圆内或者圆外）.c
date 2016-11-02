#include <stdio.h>
#include <math.h>
main()
{
	float X,Y;
	for(;;){
		printf("Inport number X:");
		scanf("%f",&X);
		printf("Inport number Y:");
		scanf("%f",&Y);
		if(X*X+Y*Y==4)
		{printf("K=1\n");
		}
		if(X*X+Y*Y>4)
		{printf("K=2\n");
		}
		if(X*X+Y*Y<4)
		{printf("K=0\n");
		}
	}
}
