#include <stdio.h>
int main(){
	int i;
	int A;
	for (i=0;i<6;i=i+1){
		printf("�������²�ļ۸�");
		scanf("%d",&A);
		if(A>2989){
			printf("���ˣ�"); 
		} 
		if(A==2989){
			printf("�����ˣ�\n");break; 
		}
		if(A<2989){
			printf("���ˣ�"); 
		}
		printf("\n");
	}
	if(i==6){
		printf("���ź�����Ϸ������\n");
	}
	if(i<6){
		printf("��ϲ�㣡\n");
	}
	
}
