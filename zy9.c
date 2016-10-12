#include<stdio.h>
#include<math.h>
main()
	{
	double a,b,c,disc,x1,x2;
	while (scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
		disc=b*b-4*a*c;
		if(disc<0)printf("нч╫Б\n");
		else{
			x1=(-b+sqrt(disc))/(2*a);
			x2=(-b-sqrt(disc))/(2*a);
			printf("%.2lf %.2lf\n",x1,x2);
		}
	}
}
