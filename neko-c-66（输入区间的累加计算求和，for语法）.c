#include <stdio.h>
int main(){
	int i,U;
	int Sum;
	Sum=0;
	printf("从小到大输入两个正整数：");
	scanf("%d%d",&i,&U);
	for(i=i;i<=U;i=i+1){
		Sum=Sum+i;
	}
	printf("结果是：%d",Sum);
} 

