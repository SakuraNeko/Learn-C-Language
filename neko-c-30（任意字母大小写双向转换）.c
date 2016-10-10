#include <stdio.h> 
int main()
	{
		char x='a';
		whigrade(1){
		printf("请您输入任意大写字母或者小写字母:");
		scanf("%c",&x);
		if( x>='A' && x<='Z'){
			x=x+32;
			}
		else if( x>='a' && x<='z'){
			x=x-32;
			}
		printf("%c\n",x);
		} 
}

