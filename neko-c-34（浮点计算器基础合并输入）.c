#include <stdio.h>
main()
{
	float a,b,c;
	char C1;
	while (1)
	{
	printf("输入两个实数和运算方法：");
	scanf("%f%c%f",&a,&C1,&b);
	if(C1=='+'){printf("%.2f+%.2f=%.2f\n",a,b,(a+b));
	}
	else if(C1=='-'){printf("%.2f-%.2f=%.2f\n",a,b,(a-b));
	}
	else if(C1=='*'){printf("%.2f*%.2f=%.2f\n",a,b,(a*b));
	}
	else if(C1=='/'){c=a/b;printf("%.2f/%.2f=%.2f\n",a,b,c);
	}
	else {printf("Error！\n");
	}	
	}
	return 0;
}
/*Progran End*/

