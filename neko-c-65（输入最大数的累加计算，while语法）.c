#include <stdio.h>
int main(){
	int i,U;
	int Sum;
	i=0;Sum=0;
	printf("����һ����������");
	scanf("%d",&U); 
	while(i<=U){
		Sum=Sum+i;
		i=i+1;
	}
	printf("����ǣ�%d",Sum);
} 

