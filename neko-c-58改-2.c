#include <stdio.h>
int main(){
	int i;i=0;
	int A;
	while (i<6){
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
		i=i+1;
	}
	if(i==6){
		printf("���ź�����Ϸ������\n");
	}
	if(i<6){
		printf("��ϲ�㣡\n");
	}
	
}
