/*Cftcuboid Calculate */
/*By:SakuraNeko*/
#include <stdio.h>
main()
{
	int a, b, c, v, s, sl, sw, sh;
	a = 2;
	b = 3;
	c = 4;
	v = a*b*c;
	sl = a*b;
	sw = a*c;
	sh = b*c;
	s = (sl + sw + sh) * 2;
	printf("V=2*3*4=%d\n", v);
	printf("S=(2*3+3*4+4*2)*2=%d\n", s);
	getch();
	return 0;
}
/* End */