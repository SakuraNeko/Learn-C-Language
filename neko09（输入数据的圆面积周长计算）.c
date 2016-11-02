/*Cycle Calculate Input*/
/*by:SakuraNeko*/
#include "stdio.h"
#include "conio.h"
main()
{
	float r, c, s, pi;
	while (1)
	{
		printf("input R:");
		scanf("%f", &r);
		pi = 3.142;
		c = 2 * pi*r;
		s = pi*r*r;
		printf("C=%.3f\n", c);
		printf("S=%.3f\n", s);
		getch();
	}
	return 0;
}
/*Progran End*/