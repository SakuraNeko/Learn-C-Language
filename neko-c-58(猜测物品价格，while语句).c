#include <stdio.h>
int main(){
	int i;i=0;
	int A;
	while (i<3){
		printf("�������²�ļ۸�");
		scanf("%d",&A);
		if(A>298){
			printf("���ˣ�"); 
		} 
		if(A==298){
			printf("ʤ����\n");break; 
		}
		if(A<298){
			printf("���ˣ�"); 
		}
		printf("\n");
		i=i+1;
	}
		printf("��Ϸ������\n");
}
