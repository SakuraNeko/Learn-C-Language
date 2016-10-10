#include <stdio.h>
int main(){
	int i;
	int password;
	for (i=0;i<3;i=i+1){
		printf("请输入您的密码：");
		scanf("%d",&password);
		if(password==123456){
			printf("密码正确！\n");break; 
		} 
		else{
			printf("密码错误！");
		} 
		printf("\n");
	}
	if(i==3){
		printf("对不起，您的银行卡已经锁死！\n");
	}
	if(i<3){
		printf("请稍等，与交易系统通讯中…\n");
	}
	
}
