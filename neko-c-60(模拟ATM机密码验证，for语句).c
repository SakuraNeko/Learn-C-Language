#include <stdio.h>
int main(){
	int i;
	int password;
	for (i=0;i<3;i=i+1){
		printf("�������������룺");
		scanf("%d",&password);
		if(password==123456){
			printf("������ȷ��\n");break; 
		} 
		else{
			printf("�������");
		} 
		printf("\n");
	}
	if(i==3){
		printf("�Բ����������п��Ѿ�������\n");
	}
	if(i<3){
		printf("���Եȣ��뽻��ϵͳͨѶ�С�\n");
	}
	
}
