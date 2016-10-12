#include<stdio.h>
main(){
	double r,s,pi;
	while (scanf("%lf",&r)!=EOF){	
		pi = 3.1415;
		s = pi*r*r;
		printf("%.4lf\n",s);
	}
}
