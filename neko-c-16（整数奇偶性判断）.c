#include <stdio.h>
main()
{	
	long int num,mod;	
	printf("Inport a munber:");
	while (1)
	{
		scanf("%d",&num);
		mod=num%2;
		if(mod==0)
		{
		printf("even\n");
		}
		else
		{
		printf("odd\n");
		}
    }
 }  
