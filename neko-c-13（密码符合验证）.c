#include <stdio.h>
main()
{	
	long int password;	
	printf("Inport your password:");
	while (1)
	{
	scanf("%ld",&password);
	if(password==123456)
	{
	printf("OK!\n");
	}
	else
	{
	printf("ERROR!\n");
	}
    }
 } 
