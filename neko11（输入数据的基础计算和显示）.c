/*A?B Calculate Input Plus*/
/*By:SakuraNeko*/
#include <stdio.h>
main()
{
	while (1)
	{
		int a, b, sum, sub, mul, div, mod;
		{
			float div;
			printf("input 2 real munbers A&B:");
			scanf("%d%d", &a, &b);
			sum = a + b;
			sub = a - b;
			mul = a*b;
			div = (float)a / (float)b;
			mod = a%b;
			printf("SUM=%d\n", sum);
			printf("SUB=%d\n", sub);
			printf("MUL=%d\n", mul);
			printf("DIV=%.2f\n", div);
			printf("MOD=%d\n", mod);
			getch();
		}
	}
	return 0;
}
/*Progran End*/
