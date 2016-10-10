#include <stdio.h>
main()
{
	int a,b;
	float c;
	char C1;
	while (1)
	{
	printf("输入两个整数和运算方法：");
	scanf("%f%c%f",&a,&C1,&b);
	if(C1=='+'){printf("%f+%f=%f\n",a,b,(a+b));
	}
	else if(C1=='-'){printf("%f-%f=%f\n",a,b,(a-b));
	}
	else if(C1=='*'){printf("%f*%f=%f\n",a,b,(a*b));
	}
	else if(C1=='/'){c=(float)a/(float)b;printf("%f/%f=%.2f\n",a,b,c);
	}
	else {printf("Error！\n");
	}	
	}
	return 0;
}
/*Progran End*/

