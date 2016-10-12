#include <stdio.h>
main()
{	
	long int num,mod;	
	while(scanf("%d",&num)!= EOF)
	{
		mod=num%2;
		if(mod==0)
		{
		printf("Å¼Êý\n");
		}
		else
		{
		printf("ÆæÊý\n");
		}
    }
 }  
