#include <stdio.h>
main()
{
	int a,b;
	char C1;
	while (1)
	{
	printf("输入两个数字：");
	scanf("%f%f",&a,&b);
	getchar();
	printf("输入计算方法（加+减-乘*除/）：");
	scanf("%c",&C1);
	if(C1=='+'){printf("%f+%f=%f\n",a,b,(a+b));
	}
	else if(C1=='-'){printf("%f-%f=%f\n",a,b,(a-b));
	}
	else if(C1=='*'){printf("%f*%f=%f\n",a,b,(a*b));
	}
	else if(C1=='/'){printf("%f/%f=%.2f\n",a,b,((float)a/(float)b));
	}
	else {printf("Error！\n");
	}	
	}
	return 0;
}
/*Progran End*/

