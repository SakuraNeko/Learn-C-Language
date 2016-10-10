#include <stdio.h>
int main(){
	int i;i=0;
	int A;
	while (i<6){
		printf("输入您猜测的价格：");
		scanf("%d",&A);
		if(A>2989){
			printf("高了！"); 
		} 
		if(A==2989){
			printf("猜中了！\n");break; 
		}
		if(A<2989){
			printf("低了！"); 
		}
		printf("\n");
		i=i+1;
	}
	if(i==6){
		printf("很遗憾，游戏结束！\n");
	}
	if(i<6){
		printf("恭喜你！\n");
	}
	
}
