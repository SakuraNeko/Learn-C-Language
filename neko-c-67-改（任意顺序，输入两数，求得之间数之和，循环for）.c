#include <stdio.h>
int main(){
	int i,m,n;
	int Sum;
	Sum=0;
	printf("输入两个整数：");
	scanf("%d%d",&m,&n);
	if(n<m){ 
		for(i=n;i<=m+1;i=i+1){
			if(i%5==0){
				Sum=Sum+i;
			}
		}
	}
	if(m>n){ 
		for(i=m;i<=n+1;i=i+1){
			if(i%5==0){
				Sum=Sum+i;
			}
		}
	}
	if(m==n){
		if(m%5==0){
			Sum=m+n;
		}
	}	
	printf("结果是：%d",Sum);
} 


