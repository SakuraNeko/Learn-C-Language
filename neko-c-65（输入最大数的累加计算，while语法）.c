#include <stdio.h>
int main(){
	int i,U;
	int Sum;
	i=0;Sum=0;
	printf("输入一个正整数：");
	scanf("%d",&U); 
	while(i<=U){
		Sum=Sum+i;
		i=i+1;
	}
	printf("结果是：%d",Sum);
} 

