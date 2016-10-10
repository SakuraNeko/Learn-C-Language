#include <stdio.h>
int main()
{
	double r;	
	while(scanf("%lf", &r) != EOF){
		printf("%.2lf\n",2 * 3.1415926*r) ;
	}
}
