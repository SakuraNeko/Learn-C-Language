#include <stdio.h>
int main(){
	int i;
	int A;
	for (i=0;i<3;i=i+1){
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
	}
	printf("��Ϸ������\n");
}
