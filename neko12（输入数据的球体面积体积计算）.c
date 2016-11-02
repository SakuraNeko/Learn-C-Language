/*Ball Calculate Input*/
/*By:SakuraNeko*/
#include <stdio.h>
main()
{
	while (1)
	{
		int r, v, s, pi;
		{
			float v, s, pi;
			printf("inpot ball r:");
			scanf("%d", &r);
			pi = 3.14;
			v = 4 / 3.0*pi*r*r*r;
			s = 4.0 / pi * 4 * r;
			printf("V=%.3f\n", v);
			printf("S=%.3f\n", s);
			getch();
		}
	}
	return 0;
}
/*Progran End*/