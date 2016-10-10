#include <stdio.h>
int main(){
	int i;i=0;
	int A;
	while (i<3){
		printf("输入您猜测的价格：");
		scanf("%d",&A);
		if(A>298){
			printf("高了！"); 
		} 
		if(A==298){
			printf("胜利！\n");break; 
		}
		if(A<298){
			printf("低了！"); 
		}
		printf("\n");
		i=i+1;
	}
		printf("游戏结束！\n");
}
