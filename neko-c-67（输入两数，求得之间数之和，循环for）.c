#include <stdio.h>
int main(){
	int i,U,T;
	int Sum;
	Sum=0;
	printf("��������������");
	scanf("%d%d",&i,&U);
	if(i<U){ 
		for(i=i;i<=U;i=i+1){
			Sum=Sum+i;
			}
	}
	else if(i>U){
		T=i;i=U;U=T; 
		for(i=i;i<=U;i=i+1){
			Sum=Sum+i;
			}
	}
	else{
		Sum=i+U;
	}	
	printf("����ǣ�%d",Sum);
} 


