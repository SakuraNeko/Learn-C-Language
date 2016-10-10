#include <stdio.h> 
int main()
	{
		char x='a';
		printf("请您输入任意大写字母:");
		scanf("%c",&x);
		x=x+32;
		printf("%c\n",x);
}

